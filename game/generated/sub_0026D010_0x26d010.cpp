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

// Function: sub_0026D010
// Address: 0x26d010 - 0x26d0c0
void sub_0026D010_0x26d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D010_0x26d010");
#endif

    switch (ctx->pc) {
        case 0x26d02cu: goto label_26d02c;
        case 0x26d06cu: goto label_26d06c;
        case 0x26d0a0u: goto label_26d0a0;
        default: break;
    }

    ctx->pc = 0x26d010u;

    // 0x26d010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d018: 0x8f90aa78  lw          $s0, -0x5588($gp)
    ctx->pc = 0x26d018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d01c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26d020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26d020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26d024: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D024u;
    SET_GPR_U32(ctx, 31, 0x26D02Cu);
    ctx->pc = 0x26D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D024u;
    // 0x26d028: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D024u, 0x26D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D02Cu;
label_26d02c:
    // 0x26d02c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x26d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x26d030: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x26d030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x26d034: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x26d034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26d038: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x26D038u;
    {
        const bool branch_taken_0x26d038 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D038u;
        // 0x26d03c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d038) {
            ctx->pc = 0x26D070u;
            goto label_26d070;
        }
    }
    ctx->pc = 0x26D040u;
    // 0x26d040: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x26D040u;
    {
        const bool branch_taken_0x26d040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d040) {
            ctx->pc = 0x26D044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D040u;
            // 0x26d044: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D074u;
            goto label_26d074;
        }
    }
    ctx->pc = 0x26D048u;
    // 0x26d048: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d04c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26D04Cu;
    {
        const bool branch_taken_0x26d04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d04c) {
            ctx->pc = 0x26D050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D04Cu;
            // 0x26d050: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D074u;
            goto label_26d074;
        }
    }
    ctx->pc = 0x26D054u;
    // 0x26d054: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x26d054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x26d058: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D058u;
    {
        const bool branch_taken_0x26d058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d058) {
            ctx->pc = 0x26D05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D058u;
            // 0x26d05c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D074u;
            goto label_26d074;
        }
    }
    ctx->pc = 0x26D060u;
    // 0x26d060: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26d060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26d064: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26D064u;
    SET_GPR_U32(ctx, 31, 0x26D06Cu);
    ctx->pc = 0x26D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D064u;
    // 0x26d068: 0x2484c7c0  addiu       $a0, $a0, -0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26D064u, 0x26D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D06Cu;
label_26d06c:
    // 0x26d06c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d070:
    // 0x26d070: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26d074:
    // 0x26d074: 0x8c62032c  lw          $v0, 0x32C($v1)
    ctx->pc = 0x26d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x26d078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26d078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26d07c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D07Cu;
    {
        const bool branch_taken_0x26d07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D07Cu;
        // 0x26d080: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d07c) {
            ctx->pc = 0x26D090u;
            goto label_26d090;
        }
    }
    ctx->pc = 0x26D084u;
    // 0x26d084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26D084u;
    {
        const bool branch_taken_0x26d084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D084u;
        // 0x26d088: 0x2484c608  addiu       $a0, $a0, -0x39F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d084) {
            ctx->pc = 0x26D098u;
            goto label_26d098;
        }
    }
    ctx->pc = 0x26D08Cu;
    // 0x26d08c: 0x0  nop
    ctx->pc = 0x26d08cu;
    // NOP
label_26d090:
    // 0x26d090: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26d090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26d094: 0x2484c530  addiu       $a0, $a0, -0x3AD0
    ctx->pc = 0x26d094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
label_26d098:
    // 0x26d098: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26D098u;
    SET_GPR_U32(ctx, 31, 0x26D0A0u);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26D098u, 0x26D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0A0u;
label_26d0a0:
    // 0x26d0a0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x26d0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26d0a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26d0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d0a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d0ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26d0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26d0b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26d0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x26D0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0B4u;
        // 0x26d0b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D0BCu;
    // 0x26d0bc: 0x0  nop
    ctx->pc = 0x26d0bcu;
    // NOP
    ctx->pc = 0x26d0c0u;
}
