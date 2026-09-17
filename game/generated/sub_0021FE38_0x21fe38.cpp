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

// Function: sub_0021FE38
// Address: 0x21fe38 - 0x21fee0
void sub_0021FE38_0x21fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FE38_0x21fe38");
#endif

    switch (ctx->pc) {
        case 0x21fe60u: goto label_21fe60;
        case 0x21fe98u: goto label_21fe98;
        case 0x21fed0u: goto label_21fed0;
        default: break;
    }

    ctx->pc = 0x21fe38u;

    // 0x21fe38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fe3c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x21fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x21fe40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fe44: 0x24424520  addiu       $v0, $v0, 0x4520
    ctx->pc = 0x21fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17696));
    // 0x21fe48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fe48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21fe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe50: 0x8c434944  lw          $v1, 0x4944($v0)
    ctx->pc = 0x21fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E8E64u));
    // 0x21fe54: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x21FE54u;
    {
        const bool branch_taken_0x21fe54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE54u;
        // 0x21fe58: 0x24454910  addiu       $a1, $v0, 0x4910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe54) {
            ctx->pc = 0x21FE84u;
            goto label_21fe84;
        }
    }
    ctx->pc = 0x21FE5Cu;
    // 0x21fe5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_21fe60:
    // 0x21fe60: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x21fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x21fe64: 0x2883001e  slti        $v1, $a0, 0x1E
    ctx->pc = 0x21fe64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x21fe68: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FE68u;
    {
        const bool branch_taken_0x21fe68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE68u;
        // 0x21fe6c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe68) {
            ctx->pc = 0x21FE88u;
            goto label_21fe88;
        }
    }
    ctx->pc = 0x21FE70u;
    // 0x21fe70: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x21fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x21fe74: 0x0  nop
    ctx->pc = 0x21fe74u;
    // NOP
    // 0x21fe78: 0x0  nop
    ctx->pc = 0x21fe78u;
    // NOP
    // 0x21fe7c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21FE7Cu;
    {
        const bool branch_taken_0x21fe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe7c) {
            ctx->pc = 0x21FE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE7Cu;
            // 0x21fe80: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fe60;
        }
    }
    ctx->pc = 0x21FE84u;
label_21fe84:
    // 0x21fe84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21fe84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fe88:
    // 0x21fe88: 0x8ca207b4  lw          $v0, 0x7B4($a1)
    ctx->pc = 0x21fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1972)));
    // 0x21fe8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21FE8Cu;
    {
        const bool branch_taken_0x21fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE8Cu;
        // 0x21fe90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe8c) {
            ctx->pc = 0x21FEACu;
            goto label_21feac;
        }
    }
    ctx->pc = 0x21FE94u;
    // 0x21fe94: 0x0  nop
    ctx->pc = 0x21fe94u;
    // NOP
label_21fe98:
    // 0x21fe98: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x21fe9c: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x21fe9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x21fea0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FEA0u;
    {
        const bool branch_taken_0x21fea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEA0u;
        // 0x21fea4: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fea0) {
            ctx->pc = 0x21FEC0u;
            goto label_21fec0;
        }
    }
    ctx->pc = 0x21FEA8u;
    // 0x21fea8: 0x8c4207b4  lw          $v0, 0x7B4($v0)
    ctx->pc = 0x21fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1972)));
label_21feac:
    // 0x21feac: 0x0  nop
    ctx->pc = 0x21feacu;
    // NOP
    // 0x21feb0: 0x0  nop
    ctx->pc = 0x21feb0u;
    // NOP
    // 0x21feb4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21FEB4u;
    {
        const bool branch_taken_0x21feb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21feb4) {
            ctx->pc = 0x21FEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FEB4u;
            // 0x21feb8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fe98;
        }
    }
    ctx->pc = 0x21FEBCu;
    // 0x21febc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21febcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fec0:
    // 0x21fec0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FEC0u;
    {
        const bool branch_taken_0x21fec0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC0u;
        // 0x21fec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fec0) {
            ctx->pc = 0x21FED4u;
            goto label_21fed4;
        }
    }
    ctx->pc = 0x21FEC8u;
    // 0x21fec8: 0xc087f20  jal         func_21FC80
    ctx->pc = 0x21FEC8u;
    SET_GPR_U32(ctx, 31, 0x21FED0u);
    ctx->pc = 0x21FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC80u, 0x21FEC8u, 0x21FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FED0u;
label_21fed0:
    // 0x21fed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21fed4:
    // 0x21fed4: 0x3e00008  jr          $ra
    ctx->pc = 0x21FED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FED4u;
        // 0x21fed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FEDCu;
    // 0x21fedc: 0x0  nop
    ctx->pc = 0x21fedcu;
    // NOP
    ctx->pc = 0x21fee0u;
}
