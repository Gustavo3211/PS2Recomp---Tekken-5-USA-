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

// Function: sub_002AEE18
// Address: 0x2aee18 - 0x2aeef8
void sub_002AEE18_0x2aee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEE18_0x2aee18");
#endif

    switch (ctx->pc) {
        case 0x2aee74u: goto label_2aee74;
        case 0x2aeebcu: goto label_2aeebc;
        case 0x2aeed0u: goto label_2aeed0;
        default: break;
    }

    ctx->pc = 0x2aee18u;

    // 0x2aee18: 0x27bd9680  addiu       $sp, $sp, -0x6980
    ctx->pc = 0x2aee18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294940288));
    // 0x2aee1c: 0xffb16948  sd          $s1, 0x6948($sp)
    ctx->pc = 0x2aee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 26952), GPR_U64(ctx, 17));
    // 0x2aee20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2aee20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee24: 0xffb26950  sd          $s2, 0x6950($sp)
    ctx->pc = 0x2aee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 26960), GPR_U64(ctx, 18));
    // 0x2aee28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aee28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee2c: 0xe7b76978  swc1        $f23, 0x6978($sp)
    ctx->pc = 0x2aee2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 27000), bits); }
    // 0x2aee30: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2aee30u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2aee34: 0xe7b66970  swc1        $f22, 0x6970($sp)
    ctx->pc = 0x2aee34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 26992), bits); }
    // 0x2aee38: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2aee38u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2aee3c: 0xe7b56968  swc1        $f21, 0x6968($sp)
    ctx->pc = 0x2aee3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 26984), bits); }
    // 0x2aee40: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2aee40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2aee44: 0xe7b46960  swc1        $f20, 0x6960($sp)
    ctx->pc = 0x2aee44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 26976), bits); }
    // 0x2aee48: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x2aee48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x2aee4c: 0xffb06940  sd          $s0, 0x6940($sp)
    ctx->pc = 0x2aee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 26944), GPR_U64(ctx, 16));
    // 0x2aee50: 0x265100b4  addiu       $s1, $s2, 0xB4
    ctx->pc = 0x2aee50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
    // 0x2aee54: 0xffbf6958  sd          $ra, 0x6958($sp)
    ctx->pc = 0x2aee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 26968), GPR_U64(ctx, 31));
    // 0x2aee58: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x2aee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aee5c: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x2aee5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2aee60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aee60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aee64: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2aee64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2aee68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2aee68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aee6c: 0xc0a9fac  jal         func_2A7EB0
    ctx->pc = 0x2AEE6Cu;
    SET_GPR_U32(ctx, 31, 0x2AEE74u);
    ctx->pc = 0x2AEE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE6Cu;
    // 0x2aee70: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7EB0u, 0x2AEE6Cu, 0x2AEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE74u;
label_2aee74:
    // 0x2aee74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aee74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee78: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2aee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2aee7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aee7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2aee80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee84: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2aee84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2aee88: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2aee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2aee8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aee90: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2aee90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2aee94: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2aee94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2aee98: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2aee98u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2aee9c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEE9Cu;
    {
        const bool branch_taken_0x2aee9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE9Cu;
        // 0x2aeea0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee9c) {
            ctx->pc = 0x2AEEB4u;
            goto label_2aeeb4;
        }
    }
    ctx->pc = 0x2AEEA4u;
    // 0x2aeea4: 0x8fa26930  lw          $v0, 0x6930($sp)
    ctx->pc = 0x2aeea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 26928)));
    // 0x2aeea8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2aeea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2aeeac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEEACu;
    {
        const bool branch_taken_0x2aeeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeeac) {
            ctx->pc = 0x2AEEC8u;
            goto label_2aeec8;
        }
    }
    ctx->pc = 0x2AEEB4u;
label_2aeeb4:
    // 0x2aeeb4: 0xc0abbbe  jal         func_2AEEF8
    ctx->pc = 0x2AEEB4u;
    SET_GPR_U32(ctx, 31, 0x2AEEBCu);
    ctx->pc = 0x2AEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEEF8u, 0x2AEEB4u, 0x2AEEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEEBCu;
label_2aeebc:
    // 0x2aeebc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEEBCu;
    {
        const bool branch_taken_0x2aeebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEBCu;
        // 0x2aeec0: 0xdfb06940  ld          $s0, 0x6940($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 26944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeebc) {
            ctx->pc = 0x2AEED4u;
            goto label_2aeed4;
        }
    }
    ctx->pc = 0x2AEEC4u;
    // 0x2aeec4: 0x0  nop
    ctx->pc = 0x2aeec4u;
    // NOP
label_2aeec8:
    // 0x2aeec8: 0xc0abbde  jal         func_2AEF78
    ctx->pc = 0x2AEEC8u;
    SET_GPR_U32(ctx, 31, 0x2AEED0u);
    ctx->pc = 0x2AEECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEEC8u;
    // 0x2aeecc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEF78u, 0x2AEEC8u, 0x2AEED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEED0u;
label_2aeed0:
    // 0x2aeed0: 0xdfb06940  ld          $s0, 0x6940($sp)
    ctx->pc = 0x2aeed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 26944)));
label_2aeed4:
    // 0x2aeed4: 0xdfb16948  ld          $s1, 0x6948($sp)
    ctx->pc = 0x2aeed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 26952)));
    // 0x2aeed8: 0xdfb26950  ld          $s2, 0x6950($sp)
    ctx->pc = 0x2aeed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 26960)));
    // 0x2aeedc: 0xdfbf6958  ld          $ra, 0x6958($sp)
    ctx->pc = 0x2aeedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 26968)));
    // 0x2aeee0: 0xc7b76978  lwc1        $f23, 0x6978($sp)
    ctx->pc = 0x2aeee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 27000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2aeee4: 0xc7b66970  lwc1        $f22, 0x6970($sp)
    ctx->pc = 0x2aeee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 26992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2aeee8: 0xc7b56968  lwc1        $f21, 0x6968($sp)
    ctx->pc = 0x2aeee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 26984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2aeeec: 0xc7b46960  lwc1        $f20, 0x6960($sp)
    ctx->pc = 0x2aeeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 26976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aeef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEF0u;
        // 0x2aeef4: 0x27bd6980  addiu       $sp, $sp, 0x6980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 27008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEEF8u;
}
