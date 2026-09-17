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

// Function: sub_0023E530
// Address: 0x23e530 - 0x23e848
void sub_0023E530_0x23e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E530_0x23e530");
#endif

    switch (ctx->pc) {
        case 0x23e5b0u: goto label_23e5b0;
        case 0x23e5e4u: goto label_23e5e4;
        case 0x23e5f0u: goto label_23e5f0;
        case 0x23e770u: goto label_23e770;
        case 0x23e784u: goto label_23e784;
        case 0x23e814u: goto label_23e814;
        default: break;
    }

    ctx->pc = 0x23e530u;

    // 0x23e530: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x23e534: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x23e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x23e538: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23e538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e53c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x23e53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x23e540: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x23e540u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e544: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x23e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x23e548: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x23e548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x23e54c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x23e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x23e550: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x23e550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23e554: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x23e554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x23e558: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x23e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x23e55c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x23e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x23e560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e564: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x23e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x23e568: 0x1ea080  sll         $s4, $fp, 2
    ctx->pc = 0x23e568u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x23e56c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x23e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x23e570: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x23e570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e574: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x23e574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x23e578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e57c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x23e57cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x23e580: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x23e580u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x23e584: 0x26311030  addiu       $s1, $s1, 0x1030
    ctx->pc = 0x23e584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4144));
    // 0x23e588: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23e588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23e58c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x23e58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x23e590: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x23e590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x23e594: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x23e594u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
    // 0x23e598: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x23e598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x23e59c: 0x8e52b598  lw          $s2, -0x4A68($s2)
    ctx->pc = 0x23e59cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948248)));
    // 0x23e5a0: 0x84840012  lh          $a0, 0x12($a0)
    ctx->pc = 0x23e5a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x23e5a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23e5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e5a8: 0xc0af9fe  jal         func_2BE7F8
    ctx->pc = 0x23E5A8u;
    SET_GPR_U32(ctx, 31, 0x23E5B0u);
    ctx->pc = 0x23E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5A8u;
    // 0x23e5ac: 0xafa80054  sw          $t0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7F8u, 0x23E5A8u, 0x23E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5B0u;
label_23e5b0:
    // 0x23e5b0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23e5b4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23e5b8: 0x8c63b5b0  lw          $v1, -0x4A50($v1)
    ctx->pc = 0x23e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948272)));
    // 0x23e5bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23e5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e5c0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x23e5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23e5c4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23e5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e5d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23e5d4: 0x2c29821  addu        $s3, $s6, $v0
    ctx->pc = 0x23e5d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x23e5d8: 0x26770070  addiu       $s7, $s3, 0x70
    ctx->pc = 0x23e5d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x23e5dc: 0xc084784  jal         func_211E10
    ctx->pc = 0x23E5DCu;
    SET_GPR_U32(ctx, 31, 0x23E5E4u);
    ctx->pc = 0x23E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5DCu;
    // 0x23e5e0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x23E5DCu, 0x23E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5E4u;
label_23e5e4:
    // 0x23e5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e5e8: 0xc084814  jal         func_212050
    ctx->pc = 0x23E5E8u;
    SET_GPR_U32(ctx, 31, 0x23E5F0u);
    ctx->pc = 0x23E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5E8u;
    // 0x23e5ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x23E5E8u, 0x23E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5F0u;
label_23e5f0:
    // 0x23e5f0: 0xc78187a4  lwc1        $f1, -0x785C($gp)
    ctx->pc = 0x23e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e5f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x23e5f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x23e5f8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x23e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e5fc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x23e5fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x23e600: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e604: 0x45000083  bc1f        . + 4 + (0x83 << 2)
    ctx->pc = 0x23E604u;
    {
        const bool branch_taken_0x23e604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E604u;
        // 0x23e608: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e604) {
            ctx->pc = 0x23E814u;
            goto label_23e814;
        }
    }
    ctx->pc = 0x23E60Cu;
    // 0x23e60c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23e610: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x23e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x23e614: 0x8c84b5e0  lw          $a0, -0x4A20($a0)
    ctx->pc = 0x23e614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948320)));
    // 0x23e618: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x23e618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x23e61c: 0xc78087a8  lwc1        $f0, -0x7858($gp)
    ctx->pc = 0x23e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e620: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23e620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x23e624: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x23e624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23e628: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23e628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23e62c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23e630: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x23e630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23e634: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x23e634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x23e638: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23e638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23e63c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x23e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x23e640: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e644: 0xc6630074  lwc1        $f3, 0x74($s3)
    ctx->pc = 0x23e644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23e648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23e648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23e64c: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x23e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e650: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x23e650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23e654: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x23e654u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x23e658: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23e658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23e65c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23e660: 0x8c63b5c8  lw          $v1, -0x4A38($v1)
    ctx->pc = 0x23e660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948296)));
    // 0x23e664: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x23e664u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e668: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x23E668u;
    {
        const bool branch_taken_0x23e668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E668u;
        // 0x23e66c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e668) {
            ctx->pc = 0x23E708u;
            goto label_23e708;
        }
    }
    ctx->pc = 0x23E670u;
    // 0x23e670: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x23e670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x23e674: 0xc78187ac  lwc1        $f1, -0x7854($gp)
    ctx->pc = 0x23e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e678: 0x0  nop
    ctx->pc = 0x23e678u;
    // NOP
    // 0x23e67c: 0x0  nop
    ctx->pc = 0x23e67cu;
    // NOP
    // 0x23e680: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x23e680u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x23e684: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x23e684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e688: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x23E688u;
    {
        const bool branch_taken_0x23e688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e688) {
            ctx->pc = 0x23E6B0u;
            goto label_23e6b0;
        }
    }
    ctx->pc = 0x23E690u;
    // 0x23e690: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23e690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23e694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e698: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23e698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23e69c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x23e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x23e6a0: 0x78430070  lq          $v1, 0x70($v0)
    ctx->pc = 0x23e6a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x23e6a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x23E6A4u;
    {
        const bool branch_taken_0x23e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6A4u;
        // 0x23e6a8: 0x7cc30000  sq          $v1, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6a4) {
            ctx->pc = 0x23E710u;
            goto label_23e710;
        }
    }
    ctx->pc = 0x23E6ACu;
    // 0x23e6ac: 0x0  nop
    ctx->pc = 0x23e6acu;
    // NOP
label_23e6b0:
    // 0x23e6b0: 0xc78087b0  lwc1        $f0, -0x7850($gp)
    ctx->pc = 0x23e6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e6b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23e6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e6b8: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x23E6B8u;
    {
        const bool branch_taken_0x23e6b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e6b8) {
            ctx->pc = 0x23E6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E6B8u;
            // 0x23e6bc: 0x78420070  lq          $v0, 0x70($v0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E70Cu;
            goto label_23e70c;
        }
    }
    ctx->pc = 0x23E6C0u;
    // 0x23e6c0: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x23e6c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6c4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x23e6c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x23e6c8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23e6cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x23e6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6d0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23e6d0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e6d4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x23e6d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x23e6d8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x23e6d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x23e6dc: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x23e6dcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e6e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23e6e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e6e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23e6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23e6ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23e6ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23e6f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23e6f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23e6f4: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x23e6f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23e6f8: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x23e6f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23e6fc: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x23e6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23e700: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23E700u;
    {
        const bool branch_taken_0x23e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E700u;
        // 0x23e704: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e700) {
            ctx->pc = 0x23E714u;
            goto label_23e714;
        }
    }
    ctx->pc = 0x23E708u;
label_23e708:
    // 0x23e708: 0x78420070  lq          $v0, 0x70($v0)
    ctx->pc = 0x23e708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 112)));
label_23e70c:
    // 0x23e70c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x23e70cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_23e710:
    // 0x23e710: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_23e714:
    // 0x23e714: 0xc78087b4  lwc1        $f0, -0x784C($gp)
    ctx->pc = 0x23e714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e718: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x23e718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e71c: 0xc78287b8  lwc1        $f2, -0x7848($gp)
    ctx->pc = 0x23e71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23e720: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23e720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e724: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x23e724u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x23e728: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x23e728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23e72c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x23e730: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x23e730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e734: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x23e738: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23e738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x23e73c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23E73Cu;
    {
        const bool branch_taken_0x23e73c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E73Cu;
        // 0x23e740: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e73c) {
            ctx->pc = 0x23E750u;
            goto label_23e750;
        }
    }
    ctx->pc = 0x23E744u;
    // 0x23e744: 0xc78087bc  lwc1        $f0, -0x7844($gp)
    ctx->pc = 0x23e744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e748: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23E748u;
    {
        const bool branch_taken_0x23e748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E748u;
        // 0x23e74c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e748) {
            ctx->pc = 0x23E768u;
            goto label_23e768;
        }
    }
    ctx->pc = 0x23E750u;
label_23e750:
    // 0x23e750: 0xc78087c0  lwc1        $f0, -0x7840($gp)
    ctx->pc = 0x23e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e758: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23E758u;
    {
        const bool branch_taken_0x23e758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e758) {
            ctx->pc = 0x23E768u;
            goto label_23e768;
        }
    }
    ctx->pc = 0x23E760u;
    // 0x23e760: 0xc78087c4  lwc1        $f0, -0x783C($gp)
    ctx->pc = 0x23e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e764: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23e764u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23e768:
    // 0x23e768: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23E768u;
    SET_GPR_U32(ctx, 31, 0x23E770u);
    ctx->pc = 0x23E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E768u;
    // 0x23e76c: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23E768u, 0x23E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E770u;
label_23e770:
    // 0x23e770: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E770u;
    {
        const bool branch_taken_0x23e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E770u;
        // 0x23e774: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e770) {
            ctx->pc = 0x23E784u;
            goto label_23e784;
        }
    }
    ctx->pc = 0x23E778u;
    // 0x23e778: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23e778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e77c: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E77Cu;
    SET_GPR_U32(ctx, 31, 0x23E784u);
    ctx->pc = 0x23E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E77Cu;
    // 0x23e780: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E77Cu, 0x23E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E784u;
label_23e784:
    // 0x23e784: 0x3c0145c8  lui         $at, 0x45C8
    ctx->pc = 0x23e784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17864 << 16));
    // 0x23e788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e78c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x23e78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e790: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x23E790u;
    {
        const bool branch_taken_0x23e790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E790u;
        // 0x23e794: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e790) {
            ctx->pc = 0x23E818u;
            goto label_23e818;
        }
    }
    ctx->pc = 0x23E798u;
    // 0x23e798: 0x2bc20004  slti        $v0, $fp, 0x4
    ctx->pc = 0x23e798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23e79c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23E79Cu;
    {
        const bool branch_taken_0x23e79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E79Cu;
        // 0x23e7a0: 0xdfb10068  ld          $s1, 0x68($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e79c) {
            ctx->pc = 0x23E81Cu;
            goto label_23e81c;
        }
    }
    ctx->pc = 0x23E7A4u;
    // 0x23e7a4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23e7a8: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23e7ac: 0x2463b598  addiu       $v1, $v1, -0x4A68
    ctx->pc = 0x23e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948248));
    // 0x23e7b0: 0x2484b5b0  addiu       $a0, $a0, -0x4A50
    ctx->pc = 0x23e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948272));
    // 0x23e7b4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x23e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x23e7b8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23e7bc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23e7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e7c0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x23e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x23e7c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23e7c8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23e7cc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x23e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23e7d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e7d4: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x23e7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23e7d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23e7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23e7dc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x23e7e0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x23e7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23e7e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23e7e8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x23e7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x23e7ec: 0x2c73821  addu        $a3, $s6, $a3
    ctx->pc = 0x23e7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x23e7f0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x23e7f4: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x23e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x23e7f8: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x23e7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x23e7fc: 0x24210af0  addiu       $at, $at, 0xAF0
    ctx->pc = 0x23e7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 2800));
    // 0x23e800: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x23e800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x23e804: 0x24c6e300  addiu       $a2, $a2, -0x1D00
    ctx->pc = 0x23e804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959872));
    // 0x23e808: 0x24e70070  addiu       $a3, $a3, 0x70
    ctx->pc = 0x23e808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x23e80c: 0xc08f6fa  jal         func_23DBE8
    ctx->pc = 0x23E80Cu;
    SET_GPR_U32(ctx, 31, 0x23E814u);
    ctx->pc = 0x23E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E80Cu;
    // 0x23e810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DBE8u, 0x23E80Cu, 0x23E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E814u;
label_23e814:
    // 0x23e814: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x23e814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23e818:
    // 0x23e818: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x23e818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_23e81c:
    // 0x23e81c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x23e81cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23e820: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x23e820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e824: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x23e824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23e828: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x23e828u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e82c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x23e82cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23e830: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x23e830u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23e834: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x23e834u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e838: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x23e838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x23e83c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x23e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23e840: 0x3e00008  jr          $ra
    ctx->pc = 0x23E840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E840u;
        // 0x23e844: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E848u;
}
