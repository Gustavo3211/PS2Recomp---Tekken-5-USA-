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

// Function: sub_0011BBD8
// Address: 0x11bbd8 - 0x11bc30
void sub_0011BBD8_0x11bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BBD8_0x11bbd8");
#endif

    switch (ctx->pc) {
        case 0x11bbd8u: goto label_11bbd8;
        case 0x11bbdcu: goto label_11bbdc;
        case 0x11bbe0u: goto label_11bbe0;
        case 0x11bbe4u: goto label_11bbe4;
        case 0x11bbe8u: goto label_11bbe8;
        case 0x11bbecu: goto label_11bbec;
        case 0x11bbf0u: goto label_11bbf0;
        case 0x11bbf4u: goto label_11bbf4;
        case 0x11bbf8u: goto label_11bbf8;
        case 0x11bbfcu: goto label_11bbfc;
        case 0x11bc00u: goto label_11bc00;
        case 0x11bc04u: goto label_11bc04;
        case 0x11bc08u: goto label_11bc08;
        case 0x11bc0cu: goto label_11bc0c;
        case 0x11bc10u: goto label_11bc10;
        case 0x11bc14u: goto label_11bc14;
        case 0x11bc18u: goto label_11bc18;
        case 0x11bc1cu: goto label_11bc1c;
        case 0x11bc20u: goto label_11bc20;
        case 0x11bc24u: goto label_11bc24;
        case 0x11bc28u: goto label_11bc28;
        case 0x11bc2cu: goto label_11bc2c;
        default: break;
    }

    ctx->pc = 0x11bbd8u;

label_11bbd8:
    // 0x11bbd8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11bbdc:
    // 0x11bbdc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11bbdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11bbe0:
    // 0x11bbe0: 0x8c45f848  lw          $a1, -0x7B8($v0)
    ctx->pc = 0x11bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965320)));
label_11bbe4:
    // 0x11bbe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11bbe8:
    // 0x11bbe8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_11bbec:
    if (ctx->pc == 0x11BBECu) {
        ctx->pc = 0x11BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBE8u;
        // 0x11bbec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BBF0u;
        goto label_11bbf0;
    }
    ctx->pc = 0x11BBE8u;
    {
        const bool branch_taken_0x11bbe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBE8u;
        // 0x11bbec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbe8) {
            ctx->pc = 0x11BC1Cu;
            goto label_11bc1c;
        }
    }
    ctx->pc = 0x11BBF0u;
label_11bbf0:
    // 0x11bbf0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_11bbf4:
    // 0x11bbf4: 0x8c4327e4  lw          $v1, 0x27E4($v0)
    ctx->pc = 0x11bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11bbf8:
    // 0x11bbf8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_11bbfc:
    if (ctx->pc == 0x11BBFCu) {
        ctx->pc = 0x11BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBF8u;
        // 0x11bbfc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BC00u;
        goto label_11bc00;
    }
    ctx->pc = 0x11BBF8u;
    {
        const bool branch_taken_0x11bbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBF8u;
        // 0x11bbfc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbf8) {
            ctx->pc = 0x11BC20u;
            goto label_11bc20;
        }
    }
    ctx->pc = 0x11BC00u;
label_11bc00:
    // 0x11bc00: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11bc04:
    // 0x11bc04: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x11bc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11bc08:
    // 0x11bc08: 0x8c5cf84c  lw          $gp, -0x7B4($v0)
    ctx->pc = 0x11bc08u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965324)));
label_11bc0c:
    // 0x11bc0c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_11bc10:
    // 0x11bc10: 0xa0f809  jalr        $a1
label_11bc14:
    if (ctx->pc == 0x11BC14u) {
        ctx->pc = 0x11BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC10u;
        // 0x11bc14: 0x8c64f850  lw          $a0, -0x7B0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BC18u;
        goto label_11bc18;
    }
    ctx->pc = 0x11BC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11BC18u);
        ctx->pc = 0x11BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC10u;
        // 0x11bc14: 0x8c64f850  lw          $a0, -0x7B0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965328)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BC10u, 0x11BC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BC18u;
label_11bc18:
    // 0x11bc18: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x11bc18u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11bc1c:
    // 0x11bc1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11bc20:
    // 0x11bc20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11bc24:
    // 0x11bc24: 0x3e00008  jr          $ra
label_11bc28:
    if (ctx->pc == 0x11BC28u) {
        ctx->pc = 0x11BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC24u;
        // 0x11bc28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BC2Cu;
        goto label_11bc2c;
    }
    ctx->pc = 0x11BC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC24u;
        // 0x11bc28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BC2Cu;
label_11bc2c:
    // 0x11bc2c: 0x0  nop
    ctx->pc = 0x11bc2cu;
    // NOP
    ctx->pc = 0x11bc30u;
}
