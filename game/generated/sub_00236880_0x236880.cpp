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

// Function: sub_00236880
// Address: 0x236880 - 0x236988
void sub_00236880_0x236880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236880_0x236880");
#endif

    switch (ctx->pc) {
        case 0x2368b4u: goto label_2368b4;
        case 0x2368c4u: goto label_2368c4;
        case 0x2368e4u: goto label_2368e4;
        case 0x236950u: goto label_236950;
        default: break;
    }

    ctx->pc = 0x236880u;

    // 0x236880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23688c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23688cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236894: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x236894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x236898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23689c: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x23689cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2368a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2368a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2368a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2368a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2368a8: 0x24910010  addiu       $s1, $a0, 0x10
    ctx->pc = 0x2368a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2368ac: 0xc08da16  jal         func_236858
    ctx->pc = 0x2368ACu;
    SET_GPR_U32(ctx, 31, 0x2368B4u);
    ctx->pc = 0x2368B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368ACu;
    // 0x2368b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236858u, 0x2368ACu, 0x2368B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368B4u;
label_2368b4:
    // 0x2368b4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2368b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2368b8: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x2368b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x2368bc: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x2368BCu;
    SET_GPR_U32(ctx, 31, 0x2368C4u);
    ctx->pc = 0x2368C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368BCu;
    // 0x2368c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x2368BCu, 0x2368C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368C4u;
label_2368c4:
    // 0x2368c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2368c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368c8: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x2368c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x2368cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2368ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2368d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2368d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2368d4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2368D4u;
    {
        const bool branch_taken_0x2368d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2368D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368D4u;
        // 0x2368d8: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368d4) {
            ctx->pc = 0x236940u;
            goto label_236940;
        }
    }
    ctx->pc = 0x2368DCu;
    // 0x2368dc: 0xc09905e  jal         func_264178
    ctx->pc = 0x2368DCu;
    SET_GPR_U32(ctx, 31, 0x2368E4u);
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2368DCu, 0x2368E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368E4u;
label_2368e4:
    // 0x2368e4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2368e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2368e8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2368E8u;
    {
        const bool branch_taken_0x2368e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2368ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368E8u;
        // 0x2368ec: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368e8) {
            ctx->pc = 0x236940u;
            goto label_236940;
        }
    }
    ctx->pc = 0x2368F0u;
    // 0x2368f0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2368f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2368f4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2368f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2368f8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2368f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2368fc: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2368fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x236900: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x236900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x236904: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x236904u;
    {
        const bool branch_taken_0x236904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x236908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236904u;
        // 0x236908: 0x8602003e  lh          $v0, 0x3E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236904) {
            ctx->pc = 0x236928u;
            goto label_236928;
        }
    }
    ctx->pc = 0x23690Cu;
    // 0x23690c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23690cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236910: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x236910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x236914: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x236914u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x236918: 0xc4207b70  lwc1        $f0, 0x7B70($at)
    ctx->pc = 0x236918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 31600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23691c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23691Cu;
    {
        const bool branch_taken_0x23691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23691Cu;
        // 0x236920: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23691c) {
            ctx->pc = 0x23693Cu;
            goto label_23693c;
        }
    }
    ctx->pc = 0x236924u;
    // 0x236924: 0x0  nop
    ctx->pc = 0x236924u;
    // NOP
label_236928:
    // 0x236928: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23692c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x23692cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x236930: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x236930u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x236934: 0xc4207af0  lwc1        $f0, 0x7AF0($at)
    ctx->pc = 0x236934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 31472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236938: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x236938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_23693c:
    // 0x23693c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x23693cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_236940:
    // 0x236940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236948: 0xc08cb60  jal         func_232D80
    ctx->pc = 0x236948u;
    SET_GPR_U32(ctx, 31, 0x236950u);
    ctx->pc = 0x23694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236948u;
    // 0x23694c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D80u, 0x236948u, 0x236950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236950u;
label_236950:
    // 0x236950: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x236950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x236954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x236954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x236958: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236958u;
    {
        const bool branch_taken_0x236958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236958u;
        // 0x23695c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236958) {
            ctx->pc = 0x236974u;
            goto label_236974;
        }
    }
    ctx->pc = 0x236960u;
    // 0x236960: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x236960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236964: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x236964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236968: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x236968u;
    {
        const bool branch_taken_0x236968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x236968) {
            ctx->pc = 0x23696Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236968u;
            // 0x23696c: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x236974u;
            goto label_236974;
        }
    }
    ctx->pc = 0x236970u;
    // 0x236970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236974:
    // 0x236974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23697c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x23697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236980: 0x3e00008  jr          $ra
    ctx->pc = 0x236980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236980u;
        // 0x236984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236988u;
}
