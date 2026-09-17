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

// Function: sub_00362C60
// Address: 0x362c60 - 0x362d48
void sub_00362C60_0x362c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362C60_0x362c60");
#endif

    switch (ctx->pc) {
        case 0x362c98u: goto label_362c98;
        case 0x362cc8u: goto label_362cc8;
        case 0x362ce0u: goto label_362ce0;
        case 0x362cf4u: goto label_362cf4;
        case 0x362d14u: goto label_362d14;
        case 0x362d40u: goto label_362d40;
        default: break;
    }

    ctx->pc = 0x362c60u;

    // 0x362c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362c64: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x362c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x362c68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c70: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x362c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x362c74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x362c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x362c78: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x362c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x362c7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x362C7Cu;
    {
        const bool branch_taken_0x362c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362C7Cu;
        // 0x362c80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362c7c) {
            ctx->pc = 0x362CA8u;
            goto label_362ca8;
        }
    }
    ctx->pc = 0x362C84u;
    // 0x362c84: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362c88: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x362c88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x362c8c: 0x24847618  addiu       $a0, $a0, 0x7618
    ctx->pc = 0x362c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30232));
    // 0x362c90: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362C90u;
    SET_GPR_U32(ctx, 31, 0x362C98u);
    ctx->pc = 0x362C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C90u;
    // 0x362c94: 0x34c6fff0  ori         $a2, $a2, 0xFFF0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65520);
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362C90u, 0x362C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C98u;
label_362c98:
    // 0x362c98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362c9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x362C9Cu;
    {
        const bool branch_taken_0x362c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362C9Cu;
        // 0x362ca0: 0x34420035  ori         $v0, $v0, 0x35 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362c9c) {
            ctx->pc = 0x362D30u;
            goto label_362d30;
        }
    }
    ctx->pc = 0x362CA4u;
    // 0x362ca4: 0x0  nop
    ctx->pc = 0x362ca4u;
    // NOP
label_362ca8:
    // 0x362ca8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x362ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x362cac: 0x24425d10  addiu       $v0, $v0, 0x5D10
    ctx->pc = 0x362cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23824));
    // 0x362cb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x362cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1D5D14u));
    // 0x362cb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x362cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D5D10u));
    // 0x362cb8: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x362CB8u;
    {
        const bool branch_taken_0x362cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x362CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362CB8u;
        // 0x362cbc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362cb8) {
            ctx->pc = 0x362CD8u;
            goto label_362cd8;
        }
    }
    ctx->pc = 0x362CC0u;
    // 0x362cc0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362CC0u;
    SET_GPR_U32(ctx, 31, 0x362CC8u);
    ctx->pc = 0x362CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362CC0u;
    // 0x362cc4: 0x24847668  addiu       $a0, $a0, 0x7668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362CC0u, 0x362CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CC8u;
label_362cc8:
    // 0x362cc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362ccc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x362CCCu;
    {
        const bool branch_taken_0x362ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362CCCu;
        // 0x362cd0: 0x34420034  ori         $v0, $v0, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ccc) {
            ctx->pc = 0x362D30u;
            goto label_362d30;
        }
    }
    ctx->pc = 0x362CD4u;
    // 0x362cd4: 0x0  nop
    ctx->pc = 0x362cd4u;
    // NOP
label_362cd8:
    // 0x362cd8: 0xc0d8ada  jal         func_362B68
    ctx->pc = 0x362CD8u;
    SET_GPR_U32(ctx, 31, 0x362CE0u);
    ctx->pc = 0x362B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B68u, 0x362CD8u, 0x362CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CE0u;
label_362ce0:
    // 0x362ce0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362ce4: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x362CE4u;
    {
        const bool branch_taken_0x362ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x362ce4) {
            ctx->pc = 0x362CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362CE4u;
            // 0x362ce8: 0x2403ffc0  addiu       $v1, $zero, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362D24u;
            goto label_362d24;
        }
    }
    ctx->pc = 0x362CECu;
    // 0x362cec: 0xc0d6d8c  jal         func_35B630
    ctx->pc = 0x362CECu;
    SET_GPR_U32(ctx, 31, 0x362CF4u);
    ctx->pc = 0x35B630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B630u, 0x362CECu, 0x362CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CF4u;
label_362cf4:
    // 0x362cf4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362cf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x362cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362cfc: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x362cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x362d00: 0x248476a8  addiu       $a0, $a0, 0x76A8
    ctx->pc = 0x362d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30376));
    // 0x362d04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362D04u;
    {
        const bool branch_taken_0x362d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D04u;
        // 0x362d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362d04) {
            ctx->pc = 0x362D20u;
            goto label_362d20;
        }
    }
    ctx->pc = 0x362D0Cu;
    // 0x362d0c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362D0Cu;
    SET_GPR_U32(ctx, 31, 0x362D14u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362D0Cu, 0x362D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D14u;
label_362d14:
    // 0x362d14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362d18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x362D18u;
    {
        const bool branch_taken_0x362d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D18u;
        // 0x362d1c: 0x34420036  ori         $v0, $v0, 0x36 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362d18) {
            ctx->pc = 0x362D30u;
            goto label_362d30;
        }
    }
    ctx->pc = 0x362D20u;
label_362d20:
    // 0x362d20: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x362d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_362d24:
    // 0x362d24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362d28: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x362d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x362d2c: 0xaf83c800  sw          $v1, -0x3800($gp)
    ctx->pc = 0x362d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952960), GPR_U32(ctx, 3));
label_362d30:
    // 0x362d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362d34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x362d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362d38: 0x3e00008  jr          $ra
    ctx->pc = 0x362D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D38u;
        // 0x362d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362D40u;
label_362d40:
    // 0x362d40: 0x3e00008  jr          $ra
    ctx->pc = 0x362D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D40u;
        // 0x362d44: 0x8f82c800  lw          $v0, -0x3800($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952960)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362D48u;
}
