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

// Function: sub_0035F080
// Address: 0x35f080 - 0x35f140
void sub_0035F080_0x35f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F080_0x35f080");
#endif

    switch (ctx->pc) {
        case 0x35f0c4u: goto label_35f0c4;
        case 0x35f124u: goto label_35f124;
        default: break;
    }

    ctx->pc = 0x35f080u;

    // 0x35f080: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f084: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f088: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35f088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35f08c: 0x2c830040  sltiu       $v1, $a0, 0x40
    ctx->pc = 0x35f08cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35f090: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f094: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x35f094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35f098: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f09c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f0a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35f0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f0a4: 0x3c08001d  lui         $t0, 0x1D
    ctx->pc = 0x35f0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)29 << 16));
    // 0x35f0a8: 0x25082c68  addiu       $t0, $t0, 0x2C68
    ctx->pc = 0x35f0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11368));
    // 0x35f0ac: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x35f0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x35f0b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F0B0u;
    {
        const bool branch_taken_0x35f0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0B0u;
        // 0x35f0b4: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f0b0) {
            ctx->pc = 0x35F0D0u;
            goto label_35f0d0;
        }
    }
    ctx->pc = 0x35F0B8u;
    // 0x35f0b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f0bc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F0BCu;
    SET_GPR_U32(ctx, 31, 0x35F0C4u);
    ctx->pc = 0x35F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0BCu;
    // 0x35f0c0: 0x24846780  addiu       $a0, $a0, 0x6780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F0BCu, 0x35F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F0C4u;
label_35f0c4:
    // 0x35f0c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f0c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x35F0C8u;
    {
        const bool branch_taken_0x35f0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0C8u;
        // 0x35f0cc: 0x34420015  ori         $v0, $v0, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f0c8) {
            ctx->pc = 0x35F134u;
            goto label_35f134;
        }
    }
    ctx->pc = 0x35F0D0u;
label_35f0d0:
    // 0x35f0d0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x35f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35f0d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f0d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35f0dc: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x35F0DCu;
    {
        const bool branch_taken_0x35f0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0DCu;
        // 0x35f0e0: 0x3442000f  ori         $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f0dc) {
            ctx->pc = 0x35F134u;
            goto label_35f134;
        }
    }
    ctx->pc = 0x35F0E4u;
    // 0x35f0e4: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x35f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x35f0e8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x35f0e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35f0ec: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x35f0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f0f0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35F0F0u;
    {
        const bool branch_taken_0x35f0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f0f0) {
            ctx->pc = 0x35F0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F0F0u;
            // 0x35f0f4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F118u;
            goto label_35f118;
        }
    }
    ctx->pc = 0x35F0F8u;
    // 0x35f0f8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x35f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x35f0fc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x35f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35f100: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35f100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35f104: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x35f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35f108: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35f10c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35F10Cu;
    {
        const bool branch_taken_0x35f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F10Cu;
        // 0x35f110: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f10c) {
            ctx->pc = 0x35F130u;
            goto label_35f130;
        }
    }
    ctx->pc = 0x35F114u;
    // 0x35f114: 0x0  nop
    ctx->pc = 0x35f114u;
    // NOP
label_35f118:
    // 0x35f118: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x35f118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f11c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F11Cu;
    SET_GPR_U32(ctx, 31, 0x35F124u);
    ctx->pc = 0x35F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F11Cu;
    // 0x35f120: 0x248467c8  addiu       $a0, $a0, 0x67C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F11Cu, 0x35F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F124u;
label_35f124:
    // 0x35f124: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35F128u;
    {
        const bool branch_taken_0x35f128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F128u;
        // 0x35f12c: 0x34420011  ori         $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f128) {
            ctx->pc = 0x35F134u;
            goto label_35f134;
        }
    }
    ctx->pc = 0x35F130u;
label_35f130:
    // 0x35f130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f134:
    // 0x35f134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f138: 0x3e00008  jr          $ra
    ctx->pc = 0x35F138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F138u;
        // 0x35f13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F140u;
}
