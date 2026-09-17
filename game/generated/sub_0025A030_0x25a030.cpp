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

// Function: sub_0025A030
// Address: 0x25a030 - 0x25a0f0
void sub_0025A030_0x25a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A030_0x25a030");
#endif

    switch (ctx->pc) {
        case 0x25a048u: goto label_25a048;
        case 0x25a0a4u: goto label_25a0a4;
        case 0x25a0bcu: goto label_25a0bc;
        case 0x25a0d4u: goto label_25a0d4;
        default: break;
    }

    ctx->pc = 0x25a030u;

    // 0x25a030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a038: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25a038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25a03c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a040: 0xc0967e4  jal         func_259F90
    ctx->pc = 0x25A040u;
    SET_GPR_U32(ctx, 31, 0x25A048u);
    ctx->pc = 0x25A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A040u;
    // 0x25a044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F90u, 0x25A040u, 0x25A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A048u;
label_25a048:
    // 0x25a048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25a048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a04c: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x25a04cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x25a050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25a050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a054: 0x2443ffd3  addiu       $v1, $v0, -0x2D
    ctx->pc = 0x25a054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
    // 0x25a058: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x25a058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x25a05c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x25a05cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25a060: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A060u;
    {
        const bool branch_taken_0x25a060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A060u;
        // 0x25a064: 0x2c440002  sltiu       $a0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a060) {
            ctx->pc = 0x25A074u;
            goto label_25a074;
        }
    }
    ctx->pc = 0x25A068u;
    // 0x25a068: 0x8602003e  lh          $v0, 0x3E($s0)
    ctx->pc = 0x25a068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x25a06c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x25a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x25a070: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x25a070u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_25a074:
    // 0x25a074: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A074u;
    {
        const bool branch_taken_0x25a074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a074) {
            ctx->pc = 0x25A078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A074u;
            // 0x25a078: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A088u;
            goto label_25a088;
        }
    }
    ctx->pc = 0x25A07Cu;
    // 0x25a07c: 0x50a00017  beql        $a1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x25A07Cu;
    {
        const bool branch_taken_0x25a07c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a07c) {
            ctx->pc = 0x25A080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A07Cu;
            // 0x25a080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A0DCu;
            goto label_25a0dc;
        }
    }
    ctx->pc = 0x25A084u;
    // 0x25a084: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x25a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_25a088:
    // 0x25a088: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x25A088u;
    {
        const bool branch_taken_0x25a088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a088) {
            ctx->pc = 0x25A08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A088u;
            // 0x25a08c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A0DCu;
            goto label_25a0dc;
        }
    }
    ctx->pc = 0x25A090u;
    // 0x25a090: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25A090u;
    {
        const bool branch_taken_0x25a090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A090u;
        // 0x25a094: 0x8e020894  lw          $v0, 0x894($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a090) {
            ctx->pc = 0x25A0B0u;
            goto label_25a0b0;
        }
    }
    ctx->pc = 0x25A098u;
    // 0x25a098: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x25a098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25a09c: 0xc096846  jal         func_25A118
    ctx->pc = 0x25A09Cu;
    SET_GPR_U32(ctx, 31, 0x25A0A4u);
    ctx->pc = 0x25A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A09Cu;
    // 0x25a0a0: 0x24840700  addiu       $a0, $a0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A118u, 0x25A09Cu, 0x25A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0A4u;
label_25a0a4:
    // 0x25a0a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25A0A4u;
    {
        const bool branch_taken_0x25a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0A4u;
        // 0x25a0a8: 0xaf80aa20  sw          $zero, -0x55E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0a4) {
            ctx->pc = 0x25A0C4u;
            goto label_25a0c4;
        }
    }
    ctx->pc = 0x25A0ACu;
    // 0x25a0ac: 0x0  nop
    ctx->pc = 0x25a0acu;
    // NOP
label_25a0b0:
    // 0x25a0b0: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x25a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25a0b4: 0xc096878  jal         func_25A1E0
    ctx->pc = 0x25A0B4u;
    SET_GPR_U32(ctx, 31, 0x25A0BCu);
    ctx->pc = 0x25A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0B4u;
    // 0x25a0b8: 0x24840700  addiu       $a0, $a0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1E0u, 0x25A0B4u, 0x25A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0BCu;
label_25a0bc:
    // 0x25a0bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a0c0: 0xaf82aa20  sw          $v0, -0x55E0($gp)
    ctx->pc = 0x25a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945312), GPR_U32(ctx, 2));
label_25a0c4:
    // 0x25a0c4: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x25a0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x25a0c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0cc: 0xc0965d6  jal         func_259758
    ctx->pc = 0x25A0CCu;
    SET_GPR_U32(ctx, 31, 0x25A0D4u);
    ctx->pc = 0x25A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0CCu;
    // 0x25a0d0: 0x24a5e540  addiu       $a1, $a1, -0x1AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259758u, 0x25A0CCu, 0x25A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0D4u;
label_25a0d4:
    // 0x25a0d4: 0xae2005c0  sw          $zero, 0x5C0($s1)
    ctx->pc = 0x25a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 0));
    // 0x25a0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25a0dc:
    // 0x25a0dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25a0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25a0e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0E4u;
        // 0x25a0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A0ECu;
    // 0x25a0ec: 0x0  nop
    ctx->pc = 0x25a0ecu;
    // NOP
    ctx->pc = 0x25a0f0u;
}
