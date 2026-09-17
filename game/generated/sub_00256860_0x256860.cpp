#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00256860
// Address: 0x256860 - 0x256d38
void sub_00256860_0x256860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256860_0x256860");
#endif

    switch (ctx->pc) {
        case 0x2568b8u: goto label_2568b8;
        case 0x256988u: goto label_256988;
        case 0x2569a8u: goto label_2569a8;
        case 0x2569c8u: goto label_2569c8;
        case 0x2569d0u: goto label_2569d0;
        case 0x256a18u: goto label_256a18;
        case 0x256a38u: goto label_256a38;
        case 0x256a50u: goto label_256a50;
        case 0x256a70u: goto label_256a70;
        case 0x256ac0u: goto label_256ac0;
        case 0x256ad8u: goto label_256ad8;
        case 0x256b70u: goto label_256b70;
        case 0x256b78u: goto label_256b78;
        case 0x256bd0u: goto label_256bd0;
        case 0x256bf0u: goto label_256bf0;
        case 0x256c10u: goto label_256c10;
        case 0x256c28u: goto label_256c28;
        case 0x256c80u: goto label_256c80;
        case 0x256ca0u: goto label_256ca0;
        case 0x256cb8u: goto label_256cb8;
        case 0x256cd8u: goto label_256cd8;
        default: break;
    }

    ctx->pc = 0x256860u;

    // 0x256860: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x256860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x256864: 0x2783cc60  addiu       $v1, $gp, -0x33A0
    ctx->pc = 0x256864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954080));
    // 0x256868: 0x2442cba0  addiu       $v0, $v0, -0x3460
    ctx->pc = 0x256868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953888));
    // 0x25686c: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x25686cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256870: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x256870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x256874: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x256874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256878: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x256878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x25687c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25687cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256880: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x256880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x256884: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x256884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x256888: 0xc78b8a68  lwc1        $f11, -0x7598($gp)
    ctx->pc = 0x256888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25688c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25688cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x256890: 0xc7868a6c  lwc1        $f6, -0x7594($gp)
    ctx->pc = 0x256890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x256894: 0xaf89cc64  sw          $t1, -0x339C($gp)
    ctx->pc = 0x256894u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954084), GPR_U32(ctx, 9));
    // 0x256898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x256898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25689c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x25689cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2568a0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2568a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2568a4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2568a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2568a8: 0xc7888a70  lwc1        $f8, -0x7590($gp)
    ctx->pc = 0x2568a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2568ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2568acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2568b0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2568b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2568b4: 0x0  nop
    ctx->pc = 0x2568b4u;
    // NOP
label_2568b8:
    // 0x2568b8: 0x46093141  sub.s       $f5, $f6, $f9
    ctx->pc = 0x2568b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x2568bc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2568bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2568c0: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x2568c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x2568c4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2568c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2568c8: 0x460a3101  sub.s       $f4, $f6, $f10
    ctx->pc = 0x2568c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x2568cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2568ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2568d0: 0x46093080  add.s       $f2, $f6, $f9
    ctx->pc = 0x2568d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x2568d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2568d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2568d8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2568d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2568dc: 0x460510c2  mul.s       $f3, $f2, $f5
    ctx->pc = 0x2568dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2568e0: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x2568e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x2568e4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2568e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2568e8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2568e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2568ec: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2568ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2568f0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2568f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2568f4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2568f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2568f8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2568f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2568fc: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2568fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x256900: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x256900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x256904: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x256904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x256908: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x256908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x25690c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x25690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x256910: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x256910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x256914: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x256914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x256918: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x256918u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25691c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x25691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x256920: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x256920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x256924: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x256924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x256928: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x256928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25692c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x256930: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x256930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x256934: 0x8f82cc64  lw          $v0, -0x339C($gp)
    ctx->pc = 0x256934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954084)));
    // 0x256938: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x256938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25693c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x25693Cu;
    {
        const bool branch_taken_0x25693c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25693Cu;
        // 0x256940: 0x460b3180  add.s       $f6, $f6, $f11 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25693c) {
            ctx->pc = 0x2568B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2568b8;
        }
    }
    ctx->pc = 0x256944u;
    // 0x256944: 0x3e00008  jr          $ra
    ctx->pc = 0x256944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25694Cu;
    // 0x25694c: 0x0  nop
    ctx->pc = 0x25694cu;
    // NOP
    // 0x256950: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x256950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x256954: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x256954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x256958: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x256958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25695c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x25695cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x256960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x256960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256964: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x256964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x256968: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x256968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x25696c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x25696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x256970: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x256970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x256974: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x256974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x256978: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x256978u;
    {
        const bool branch_taken_0x256978 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256978u;
        // 0x25697c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256978) {
            ctx->pc = 0x2569BCu;
            goto label_2569bc;
        }
    }
    ctx->pc = 0x256980u;
    // 0x256980: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x256980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x256984: 0x0  nop
    ctx->pc = 0x256984u;
    // NOP
label_256988:
    // 0x256988: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x256988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x25698c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x25698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x256990: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x256990u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x256994: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x256994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x256998: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x256998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25699c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x25699cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2569a0: 0xc08491e  jal         func_212478
    ctx->pc = 0x2569A0u;
    SET_GPR_U32(ctx, 31, 0x2569A8u);
    ctx->pc = 0x2569A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2569A0u;
    // 0x2569a4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2569A0u, 0x2569A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569A8u;
label_2569a8:
    // 0x2569a8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2569a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2569ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2569acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2569b0: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2569b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2569b4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2569B4u;
    {
        const bool branch_taken_0x2569b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2569b4) {
            ctx->pc = 0x2569B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2569B4u;
            // 0x2569b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256988;
        }
    }
    ctx->pc = 0x2569BCu;
label_2569bc:
    // 0x2569bc: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2569BCu;
    {
        const bool branch_taken_0x2569bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2569C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569BCu;
        // 0x2569c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569bc) {
            ctx->pc = 0x256A0Cu;
            goto label_256a0c;
        }
    }
    ctx->pc = 0x2569C4u;
    // 0x2569c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2569c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2569c8:
    // 0x2569c8: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x2569c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2569cc: 0x93980  sll         $a3, $t1, 6
    ctx->pc = 0x2569ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_2569d0:
    // 0x2569d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2569d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2569d4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2569d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2569d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2569d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2569dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2569dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2569e0: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x2569e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2569e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2569e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2569e8: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x2569e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2569ec: 0x28c50003  slti        $a1, $a2, 0x3
    ctx->pc = 0x2569ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2569f0: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2569F0u;
    {
        const bool branch_taken_0x2569f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2569F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569F0u;
        // 0x2569f4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569f0) {
            ctx->pc = 0x2569D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2569d0;
        }
    }
    ctx->pc = 0x2569F8u;
    // 0x2569f8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2569f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2569fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2569fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x256a00: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x256a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x256a04: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x256A04u;
    {
        const bool branch_taken_0x256a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256a04) {
            ctx->pc = 0x256A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256A04u;
            // 0x256a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2569C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2569c8;
        }
    }
    ctx->pc = 0x256A0Cu;
label_256a0c:
    // 0x256a0c: 0x18600028  blez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x256A0Cu;
    {
        const bool branch_taken_0x256a0c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x256A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A0Cu;
        // 0x256a10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a0c) {
            ctx->pc = 0x256AB0u;
            goto label_256ab0;
        }
    }
    ctx->pc = 0x256A14u;
    // 0x256a14: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x256a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_256a18:
    // 0x256a18: 0x8f82cc64  lw          $v0, -0x339C($gp)
    ctx->pc = 0x256a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954084)));
    // 0x256a1c: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x256a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x256a20: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x256a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x256a24: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x256a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256a28: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x256A28u;
    {
        const bool branch_taken_0x256a28 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x256A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A28u;
        // 0x256a2c: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a28) {
            ctx->pc = 0x256A58u;
            goto label_256a58;
        }
    }
    ctx->pc = 0x256A30u;
    // 0x256a30: 0x8f86cc60  lw          $a2, -0x33A0($gp)
    ctx->pc = 0x256a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954080)));
    // 0x256a34: 0x0  nop
    ctx->pc = 0x256a34u;
    // NOP
label_256a38:
    // 0x256a38: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x256a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x256a3c: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x256a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x256a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x256a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256a44: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x256a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x256a48: 0xc08491e  jal         func_212478
    ctx->pc = 0x256A48u;
    SET_GPR_U32(ctx, 31, 0x256A50u);
    ctx->pc = 0x256A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A48u;
    // 0x256a4c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x256A48u, 0x256A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A50u;
label_256a50:
    // 0x256a50: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x256A50u;
    {
        const bool branch_taken_0x256a50 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x256A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A50u;
        // 0x256a54: 0x8f86cc60  lw          $a2, -0x33A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a50) {
            ctx->pc = 0x256A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256a38;
        }
    }
    ctx->pc = 0x256A58u;
label_256a58:
    // 0x256a58: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x256a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x256a5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256a60: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x256a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x256a64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256a68: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x256a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x256a6c: 0x0  nop
    ctx->pc = 0x256a6cu;
    // NOP
label_256a70:
    // 0x256a70: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x256a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x256a74: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x256a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x256a78: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x256a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x256a7c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x256a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x256a80: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x256a80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256a84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256a88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x256a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x256a8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256a90: 0x28c40005  slti        $a0, $a2, 0x5
    ctx->pc = 0x256a90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x256a94: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x256A94u;
    {
        const bool branch_taken_0x256a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x256A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A94u;
        // 0x256a98: 0x7c430140  sq          $v1, 0x140($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 320), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a94) {
            ctx->pc = 0x256A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256a70;
        }
    }
    ctx->pc = 0x256A9Cu;
    // 0x256a9c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x256a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x256aa0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x256aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x256aa4: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x256aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x256aa8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x256AA8u;
    {
        const bool branch_taken_0x256aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256aa8) {
            ctx->pc = 0x256A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256a18;
        }
    }
    ctx->pc = 0x256AB0u;
label_256ab0:
    // 0x256ab0: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x256AB0u;
    {
        const bool branch_taken_0x256ab0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x256AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AB0u;
        // 0x256ab4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ab0) {
            ctx->pc = 0x256B18u;
            goto label_256b18;
        }
    }
    ctx->pc = 0x256AB8u;
    // 0x256ab8: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x256ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x256abc: 0x0  nop
    ctx->pc = 0x256abcu;
    // NOP
label_256ac0:
    // 0x256ac0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x256ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ac4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x256ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x256ac8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x256ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256acc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256ad0: 0x4a3021  addu        $a2, $v0, $t2
    ctx->pc = 0x256ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x256ad4: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x256ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_256ad8:
    // 0x256ad8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x256ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x256adc: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x256adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x256ae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256ae4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x256ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256ae8: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x256ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x256aec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256af0: 0x78830140  lq          $v1, 0x140($a0)
    ctx->pc = 0x256af0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x256af4: 0x28e50019  slti        $a1, $a3, 0x19
    ctx->pc = 0x256af4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x256af8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x256af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x256afc: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x256AFCu;
    {
        const bool branch_taken_0x256afc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x256B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AFCu;
        // 0x256b00: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256afc) {
            ctx->pc = 0x256AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256ad8;
        }
    }
    ctx->pc = 0x256B04u;
    // 0x256b04: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x256b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x256b08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x256b08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x256b0c: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x256b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256b10: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x256B10u;
    {
        const bool branch_taken_0x256b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B10u;
        // 0x256b14: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b10) {
            ctx->pc = 0x256AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256ac0;
        }
    }
    ctx->pc = 0x256B18u;
label_256b18:
    // 0x256b18: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x256b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256b1c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x256b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x256b20: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x256b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256b24: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x256b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x256b28: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x256b28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b2c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x256b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x256b30: 0x3e00008  jr          $ra
    ctx->pc = 0x256B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B30u;
        // 0x256b34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256B38u;
    // 0x256b38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x256b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x256b3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x256b3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b40: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x256b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x256b44: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x256b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x256b48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x256b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b4c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x256b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x256b50: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x256b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x256b54: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x256b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x256b58: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x256b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x256b5c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x256b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x256b60: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x256B60u;
    {
        const bool branch_taken_0x256b60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x256B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B60u;
        // 0x256b64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b60) {
            ctx->pc = 0x256BC0u;
            goto label_256bc0;
        }
    }
    ctx->pc = 0x256B68u;
    // 0x256b68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x256b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b6c: 0x0  nop
    ctx->pc = 0x256b6cu;
    // NOP
label_256b70:
    // 0x256b70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x256b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256b74: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x256b74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_256b78:
    // 0x256b78: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x256b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x256b7c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x256b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x256b80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256b84: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x256b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x256b88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256b8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x256b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x256b90: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x256b90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256b94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x256b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256b98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256b9c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x256b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x256ba0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x256ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x256ba4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x256BA4u;
    {
        const bool branch_taken_0x256ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BA4u;
        // 0x256ba8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ba4) {
            ctx->pc = 0x256B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256b78;
        }
    }
    ctx->pc = 0x256BACu;
    // 0x256bac: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x256bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x256bb0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x256bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x256bb4: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x256bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x256bb8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x256BB8u;
    {
        const bool branch_taken_0x256bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256bb8) {
            ctx->pc = 0x256BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256BB8u;
            // 0x256bbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256b70;
        }
    }
    ctx->pc = 0x256BC0u;
label_256bc0:
    // 0x256bc0: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x256BC0u;
    {
        const bool branch_taken_0x256bc0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x256BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BC0u;
        // 0x256bc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bc0) {
            ctx->pc = 0x256C04u;
            goto label_256c04;
        }
    }
    ctx->pc = 0x256BC8u;
    // 0x256bc8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x256bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x256bcc: 0x0  nop
    ctx->pc = 0x256bccu;
    // NOP
label_256bd0:
    // 0x256bd0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x256bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x256bd4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x256bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x256bd8: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x256bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x256bdc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x256bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x256be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256be4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x256be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x256be8: 0xc08491e  jal         func_212478
    ctx->pc = 0x256BE8u;
    SET_GPR_U32(ctx, 31, 0x256BF0u);
    ctx->pc = 0x256BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BE8u;
    // 0x256bec: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x256BE8u, 0x256BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BF0u;
label_256bf0:
    // 0x256bf0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x256bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x256bf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x256bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x256bf8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x256bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x256bfc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x256BFCu;
    {
        const bool branch_taken_0x256bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256bfc) {
            ctx->pc = 0x256C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256BFCu;
            // 0x256c00: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256bd0;
        }
    }
    ctx->pc = 0x256C04u;
label_256c04:
    // 0x256c04: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x256C04u;
    {
        const bool branch_taken_0x256c04 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x256C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C04u;
        // 0x256c08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c04) {
            ctx->pc = 0x256C70u;
            goto label_256c70;
        }
    }
    ctx->pc = 0x256C0Cu;
    // 0x256c0c: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x256c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_256c10:
    // 0x256c10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x256c10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c14: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x256c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x256c18: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x256c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256c1c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256c20: 0x493021  addu        $a2, $v0, $t1
    ctx->pc = 0x256c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x256c24: 0x0  nop
    ctx->pc = 0x256c24u;
    // NOP
label_256c28:
    // 0x256c28: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x256c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x256c2c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x256c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x256c30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256c34: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x256c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x256c38: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256c3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x256c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x256c40: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x256c40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256c44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x256c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256c48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256c4c: 0x28e20019  slti        $v0, $a3, 0x19
    ctx->pc = 0x256c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x256c50: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x256c50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x256c54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x256C54u;
    {
        const bool branch_taken_0x256c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C54u;
        // 0x256c58: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c54) {
            ctx->pc = 0x256C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256c28;
        }
    }
    ctx->pc = 0x256C5Cu;
    // 0x256c5c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x256c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x256c60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x256c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x256c64: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x256c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x256c68: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x256C68u;
    {
        const bool branch_taken_0x256c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C68u;
        // 0x256c6c: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c68) {
            ctx->pc = 0x256C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256c10;
        }
    }
    ctx->pc = 0x256C70u;
label_256c70:
    // 0x256c70: 0x18600029  blez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x256C70u;
    {
        const bool branch_taken_0x256c70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x256C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C70u;
        // 0x256c74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c70) {
            ctx->pc = 0x256D18u;
            goto label_256d18;
        }
    }
    ctx->pc = 0x256C78u;
    // 0x256c78: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x256c78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c7c: 0x0  nop
    ctx->pc = 0x256c7cu;
    // NOP
label_256c80:
    // 0x256c80: 0x8f82cc64  lw          $v0, -0x339C($gp)
    ctx->pc = 0x256c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954084)));
    // 0x256c84: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x256c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x256c88: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x256c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x256c8c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x256c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256c90: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x256C90u;
    {
        const bool branch_taken_0x256c90 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x256C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C90u;
        // 0x256c94: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c90) {
            ctx->pc = 0x256CC0u;
            goto label_256cc0;
        }
    }
    ctx->pc = 0x256C98u;
    // 0x256c98: 0x8f86cc60  lw          $a2, -0x33A0($gp)
    ctx->pc = 0x256c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954080)));
    // 0x256c9c: 0x0  nop
    ctx->pc = 0x256c9cu;
    // NOP
label_256ca0:
    // 0x256ca0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x256ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x256ca4: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x256ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x256ca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256cac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x256cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x256cb0: 0xc08491e  jal         func_212478
    ctx->pc = 0x256CB0u;
    SET_GPR_U32(ctx, 31, 0x256CB8u);
    ctx->pc = 0x256CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256CB0u;
    // 0x256cb4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x256CB0u, 0x256CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CB8u;
label_256cb8:
    // 0x256cb8: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x256CB8u;
    {
        const bool branch_taken_0x256cb8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x256CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CB8u;
        // 0x256cbc: 0x8f86cc60  lw          $a2, -0x33A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cb8) {
            ctx->pc = 0x256CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256ca0;
        }
    }
    ctx->pc = 0x256CC0u;
label_256cc0:
    // 0x256cc0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x256cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x256cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256cc8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x256cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x256ccc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256cd0: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x256cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x256cd4: 0x0  nop
    ctx->pc = 0x256cd4u;
    // NOP
label_256cd8:
    // 0x256cd8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x256cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x256cdc: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x256cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x256ce0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x256ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x256ce4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x256ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x256ce8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x256ce8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256cec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256cf0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x256cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x256cf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256cf8: 0x28c40005  slti        $a0, $a2, 0x5
    ctx->pc = 0x256cf8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x256cfc: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x256CFCu;
    {
        const bool branch_taken_0x256cfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x256D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CFCu;
        // 0x256d00: 0x7c430140  sq          $v1, 0x140($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 320), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cfc) {
            ctx->pc = 0x256CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256cd8;
        }
    }
    ctx->pc = 0x256D04u;
    // 0x256d04: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x256d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x256d08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x256d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x256d0c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x256d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256d10: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x256D10u;
    {
        const bool branch_taken_0x256d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256d10) {
            ctx->pc = 0x256C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256c80;
        }
    }
    ctx->pc = 0x256D18u;
label_256d18:
    // 0x256d18: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x256d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256d1c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x256d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x256d20: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x256d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256d24: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x256d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x256d28: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x256d28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256d2c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x256d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x256d30: 0x3e00008  jr          $ra
    ctx->pc = 0x256D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D30u;
        // 0x256d34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256D38u;
}
