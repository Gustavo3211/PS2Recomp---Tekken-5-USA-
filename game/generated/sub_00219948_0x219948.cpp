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

// Function: sub_00219948
// Address: 0x219948 - 0x2199c0
void sub_00219948_0x219948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219948_0x219948");
#endif

    switch (ctx->pc) {
        case 0x219978u: goto label_219978;
        case 0x219990u: goto label_219990;
        case 0x2199a8u: goto label_2199a8;
        default: break;
    }

    ctx->pc = 0x219948u;

    // 0x219948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21994c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21995c: 0x2791a380  addiu       $s1, $gp, -0x5C80
    ctx->pc = 0x21995cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943616));
    // 0x219960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219964: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x219964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219968: 0x240700fc  addiu       $a3, $zero, 0xFC
    ctx->pc = 0x219968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x21996c: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x21996cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x219970: 0xc086650  jal         func_219940
    ctx->pc = 0x219970u;
    SET_GPR_U32(ctx, 31, 0x219978u);
    ctx->pc = 0x219974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219970u;
    // 0x219974: 0x9604004c  lhu         $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219940u, 0x219970u, 0x219978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219978u;
label_219978:
    // 0x219978: 0x96040050  lhu         $a0, 0x50($s0)
    ctx->pc = 0x219978u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21997c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21997cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x219980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219984: 0x24070154  addiu       $a3, $zero, 0x154
    ctx->pc = 0x219984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x219988: 0xc086650  jal         func_219940
    ctx->pc = 0x219988u;
    SET_GPR_U32(ctx, 31, 0x219990u);
    ctx->pc = 0x21998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219988u;
    // 0x21998c: 0x2408012c  addiu       $t0, $zero, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219940u, 0x219988u, 0x219990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219990u;
label_219990:
    // 0x219990: 0x96040054  lhu         $a0, 0x54($s0)
    ctx->pc = 0x219990u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x219994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x219994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219998: 0x2786a388  addiu       $a2, $gp, -0x5C78
    ctx->pc = 0x219998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943624));
    // 0x21999c: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x21999cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2199a0: 0xc086650  jal         func_219940
    ctx->pc = 0x2199A0u;
    SET_GPR_U32(ctx, 31, 0x2199A8u);
    ctx->pc = 0x2199A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199A0u;
    // 0x2199a4: 0x2408015e  addiu       $t0, $zero, 0x15E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219940u, 0x2199A0u, 0x2199A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199A8u;
label_2199a8:
    // 0x2199a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2199a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2199ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2199acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2199b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2199b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2199b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2199B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2199B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199B4u;
        // 0x2199b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2199B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2199BCu;
    // 0x2199bc: 0x0  nop
    ctx->pc = 0x2199bcu;
    // NOP
    ctx->pc = 0x2199c0u;
}
