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

// Function: sub_00359F18
// Address: 0x359f18 - 0x359fa8
void sub_00359F18_0x359f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359F18_0x359f18");
#endif

    switch (ctx->pc) {
        case 0x359f38u: goto label_359f38;
        default: break;
    }

    ctx->pc = 0x359f18u;

    // 0x359f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359f28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x359f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x359f30: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x359F30u;
    SET_GPR_U32(ctx, 31, 0x359F38u);
    ctx->pc = 0x359F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F30u;
    // 0x359f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x359F30u, 0x359F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F38u;
label_359f38:
    // 0x359f38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x359f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x359f3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x359f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x359f40: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x359f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359f44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x359f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x359f48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x359f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359f4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x359f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x359f50: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x359f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x359f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359f58: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x359f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x359f5c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x359f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x359f60: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x359f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359f68: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x359f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x359f6c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x359f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x359f70: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x359f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359f78: 0x80430008  lb          $v1, 0x8($v0)
    ctx->pc = 0x359f78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x359f7c: 0x54650004  bnel        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x359F7Cu;
    {
        const bool branch_taken_0x359f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x359f7c) {
            ctx->pc = 0x359F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359F7Cu;
            // 0x359f80: 0x8442002c  lh          $v0, 0x2C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359F90u;
            goto label_359f90;
        }
    }
    ctx->pc = 0x359F84u;
    // 0x359f84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x359F84u;
    {
        const bool branch_taken_0x359f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F84u;
        // 0x359f88: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f84) {
            ctx->pc = 0x359F94u;
            goto label_359f94;
        }
    }
    ctx->pc = 0x359F8Cu;
    // 0x359f8c: 0x0  nop
    ctx->pc = 0x359f8cu;
    // NOP
label_359f90:
    // 0x359f90: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x359f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_359f94:
    // 0x359f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359f9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x359FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359FA0u;
        // 0x359fa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359FA8u;
}
