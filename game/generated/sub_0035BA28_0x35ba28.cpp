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

// Function: sub_0035BA28
// Address: 0x35ba28 - 0x35bac0
void sub_0035BA28_0x35ba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BA28_0x35ba28");
#endif

    switch (ctx->pc) {
        case 0x35ba3cu: goto label_35ba3c;
        case 0x35ba60u: goto label_35ba60;
        case 0x35ba68u: goto label_35ba68;
        case 0x35ba88u: goto label_35ba88;
        case 0x35baa8u: goto label_35baa8;
        default: break;
    }

    ctx->pc = 0x35ba28u;

    // 0x35ba28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ba2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ba30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35ba34: 0xc045d06  jal         func_117418
    ctx->pc = 0x35BA34u;
    SET_GPR_U32(ctx, 31, 0x35BA3Cu);
    ctx->pc = 0x35BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA34u;
    // 0x35ba38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117418u, 0x35BA34u, 0x35BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA3Cu;
label_35ba3c:
    // 0x35ba3c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ba40: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35BA40u;
    {
        const bool branch_taken_0x35ba40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x35BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA40u;
        // 0x35ba44: 0x24845540  addiu       $a0, $a0, 0x5540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba40) {
            ctx->pc = 0x35BA58u;
            goto label_35ba58;
        }
    }
    ctx->pc = 0x35BA48u;
    // 0x35ba48: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ba4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35BA4Cu;
    {
        const bool branch_taken_0x35ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA4Cu;
        // 0x35ba50: 0x24845518  addiu       $a0, $a0, 0x5518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba4c) {
            ctx->pc = 0x35BA80u;
            goto label_35ba80;
        }
    }
    ctx->pc = 0x35BA54u;
    // 0x35ba54: 0x0  nop
    ctx->pc = 0x35ba54u;
    // NOP
label_35ba58:
    // 0x35ba58: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BA58u;
    SET_GPR_U32(ctx, 31, 0x35BA60u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BA58u, 0x35BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA60u;
label_35ba60:
    // 0x35ba60: 0xc045d28  jal         func_1174A0
    ctx->pc = 0x35BA60u;
    SET_GPR_U32(ctx, 31, 0x35BA68u);
    ctx->pc = 0x35BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA60u;
    // 0x35ba64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1174A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1174A0u, 0x35BA60u, 0x35BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA68u;
label_35ba68:
    // 0x35ba68: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ba6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35ba6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba70: 0x24845560  addiu       $a0, $a0, 0x5560
    ctx->pc = 0x35ba70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
    // 0x35ba74: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x35ba74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba78: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35BA78u;
    {
        const bool branch_taken_0x35ba78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA78u;
        // 0x35ba7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba78) {
            ctx->pc = 0x35BA90u;
            goto label_35ba90;
        }
    }
    ctx->pc = 0x35BA80u;
label_35ba80:
    // 0x35ba80: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BA80u;
    SET_GPR_U32(ctx, 31, 0x35BA88u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BA80u, 0x35BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA88u;
label_35ba88:
    // 0x35ba88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35BA88u;
    {
        const bool branch_taken_0x35ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA88u;
        // 0x35ba8c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba88) {
            ctx->pc = 0x35BAACu;
            goto label_35baac;
        }
    }
    ctx->pc = 0x35BA90u;
label_35ba90:
    // 0x35ba90: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ba94: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35ba98: 0x24845588  addiu       $a0, $a0, 0x5588
    ctx->pc = 0x35ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21896));
    // 0x35ba9c: 0xac431340  sw          $v1, 0x1340($v0)
    ctx->pc = 0x35ba9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1D1340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1340u, _value); } while (0);
    // 0x35baa0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BAA0u;
    SET_GPR_U32(ctx, 31, 0x35BAA8u);
    ctx->pc = 0x35BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BAA0u;
    // 0x35baa4: 0xaf90c7c4  sw          $s0, -0x383C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952900), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BAA0u, 0x35BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BAA8u;
label_35baa8:
    // 0x35baa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35baa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35baac:
    // 0x35baac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35baacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bab0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35bab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bab4: 0x3e00008  jr          $ra
    ctx->pc = 0x35BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAB4u;
        // 0x35bab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BABCu;
    // 0x35babc: 0x0  nop
    ctx->pc = 0x35babcu;
    // NOP
    ctx->pc = 0x35bac0u;
}
