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

// Function: sub_00339BE0
// Address: 0x339be0 - 0x339c9c
void sub_00339BE0_0x339be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339BE0_0x339be0");
#endif

    ctx->pc = 0x339be0u;

    // 0x339be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339be4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x339be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x339be8: 0x2c83003b  sltiu       $v1, $a0, 0x3B
    ctx->pc = 0x339be8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x339bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339bf0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x339BF0u;
    {
        const bool branch_taken_0x339bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BF0u;
        // 0x339bf4: 0x2447ec80  addiu       $a3, $v0, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bf0) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339BF8u;
    // 0x339bf8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x339bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x339bfc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x339bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x339c00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x339c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x339c04: 0x8c6331c0  lw          $v1, 0x31C0($v1)
    ctx->pc = 0x339c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12736)));
    // 0x339c08: 0x600008  jr          $v1
    ctx->pc = 0x339C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x339C10u: goto label_339c10;
            case 0x339C28u: goto label_339c28;
            case 0x339C38u: goto label_339c38;
            case 0x339C50u: goto label_339c50;
            case 0x339C68u: goto label_339c68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339C08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x339C10u;
label_339c10:
    // 0x339c10: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x339c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x339c14: 0x24c2001f  addiu       $v0, $a2, 0x1F
    ctx->pc = 0x339c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x339c18: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x339c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x339c1c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x339c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x339c20: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x339C20u;
    {
        const bool branch_taken_0x339c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C20u;
        // 0x339c24: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c20) {
            ctx->pc = 0x339C6Cu;
            goto label_339c6c;
        }
    }
    ctx->pc = 0x339C28u;
label_339c28:
    // 0x339c28: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x339c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x339c2c: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x339c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x339c30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x339C30u;
    {
        const bool branch_taken_0x339c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C30u;
        // 0x339c34: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c30) {
            ctx->pc = 0x339C44u;
            goto label_339c44;
        }
    }
    ctx->pc = 0x339C38u;
label_339c38:
    // 0x339c38: 0x24a3007f  addiu       $v1, $a1, 0x7F
    ctx->pc = 0x339c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x339c3c: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x339c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x339c40: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x339c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_339c44:
    // 0x339c44: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x339c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x339c48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x339C48u;
    {
        const bool branch_taken_0x339c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C48u;
        // 0x339c4c: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c48) {
            ctx->pc = 0x339C6Cu;
            goto label_339c6c;
        }
    }
    ctx->pc = 0x339C50u;
label_339c50:
    // 0x339c50: 0x24a3007f  addiu       $v1, $a1, 0x7F
    ctx->pc = 0x339c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x339c54: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x339c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x339c58: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x339c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x339c5c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x339c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x339c60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x339C60u;
    {
        const bool branch_taken_0x339c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C60u;
        // 0x339c64: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c60) {
            ctx->pc = 0x339C6Cu;
            goto label_339c6c;
        }
    }
    ctx->pc = 0x339C68u;
label_339c68:
    // 0x339c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x339c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339c6c:
    // 0x339c6c: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x339c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x339c70: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x339C70u;
    {
        const bool branch_taken_0x339c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339c70) {
            ctx->pc = 0x339C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339C70u;
            // 0x339c74: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339CA0u;
            return;
        }
    }
    ctx->pc = 0x339C78u;
    // 0x339c78: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x339c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x339c7c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x339c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x339c80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x339c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x339c84: 0x8c6332b0  lw          $v1, 0x32B0($v1)
    ctx->pc = 0x339c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12976)));
    // 0x339c88: 0x600008  jr          $v1
    ctx->pc = 0x339C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x339C90u: goto label_339c90;
            case 0x339C98u: goto label_339c98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339C88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x339C90u;
label_339c90:
    // 0x339c90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x339C90u;
    {
        const bool branch_taken_0x339c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C90u;
        // 0x339c94: 0x24e701bc  addiu       $a3, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c90) {
            ctx->pc = 0x339C9Cu;
            return;
        }
    }
    ctx->pc = 0x339C98u;
label_339c98:
    // 0x339c98: 0x24e701c8  addiu       $a3, $a3, 0x1C8
    ctx->pc = 0x339c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 456));
    ctx->pc = 0x339c9cu;
}
