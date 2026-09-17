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

// Function: sub_00106010
// Address: 0x106010 - 0x106198
void sub_00106010_0x106010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106010_0x106010");
#endif

    switch (ctx->pc) {
        case 0x1060a4u: goto label_1060a4;
        case 0x1060a8u: goto label_1060a8;
        default: break;
    }

    ctx->pc = 0x106010u;

    // 0x106010: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x106010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x106014: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106018: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x106018u;
    {
        const bool branch_taken_0x106018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106018) {
            ctx->pc = 0x106130u;
            goto label_106130;
        }
    }
    ctx->pc = 0x106020u;
    // 0x106020: 0x8c820188  lw          $v0, 0x188($a0)
    ctx->pc = 0x106020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x106024: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x106024u;
    {
        const bool branch_taken_0x106024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106024) {
            ctx->pc = 0x106028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106024u;
            // 0x106028: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1060B8u;
            goto label_1060b8;
        }
    }
    ctx->pc = 0x10602Cu;
    // 0x10602c: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x10602Cu;
    {
        const bool branch_taken_0x10602c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x106030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10602Cu;
        // 0x106030: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10602c) {
            ctx->pc = 0x106040u;
            goto label_106040;
        }
    }
    ctx->pc = 0x106034u;
    // 0x106034: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x106034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x106038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106038u;
    {
        const bool branch_taken_0x106038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106038u;
        // 0x10603c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106038) {
            ctx->pc = 0x106044u;
            goto label_106044;
        }
    }
    ctx->pc = 0x106040u;
label_106040:
    // 0x106040: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x106040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_106044:
    // 0x106044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106048: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x106048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10604c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10604Cu;
    {
        const bool branch_taken_0x10604c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x106050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10604Cu;
        // 0x106050: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10604c) {
            ctx->pc = 0x106060u;
            goto label_106060;
        }
    }
    ctx->pc = 0x106054u;
    // 0x106054: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x106054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x106058: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106058u;
    {
        const bool branch_taken_0x106058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106058u;
        // 0x10605c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106058) {
            ctx->pc = 0x106064u;
            goto label_106064;
        }
    }
    ctx->pc = 0x106060u;
label_106060:
    // 0x106060: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x106060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_106064:
    // 0x106064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106068: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10606c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10606cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x106070: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x106070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x106074: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x106074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x106078: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x106078u;
    {
        const bool branch_taken_0x106078 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x10607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106078u;
        // 0x10607c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106078) {
            ctx->pc = 0x106084u;
            goto label_106084;
        }
    }
    ctx->pc = 0x106080u;
    // 0x106080: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_106084:
    // 0x106084: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x106084u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x106088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10608c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x10608cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x106090: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x106090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x106094: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x106094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x106098: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x106098u;
    {
        const bool branch_taken_0x106098 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x10609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106098u;
        // 0x10609c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106098) {
            ctx->pc = 0x1060A4u;
            goto label_1060a4;
        }
    }
    ctx->pc = 0x1060A0u;
    // 0x1060a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1060a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1060a4:
    // 0x1060a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1060a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1060a8:
    // 0x1060a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1060a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1060ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1060acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1060b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1060B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1060B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060B0u;
        // 0x1060b4: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1060B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1060B8u;
label_1060b8:
    // 0x1060b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1060b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1060bc: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1060BCu;
    {
        const bool branch_taken_0x1060bc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1060C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060BCu;
        // 0x1060c0: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060bc) {
            ctx->pc = 0x1060C8u;
            goto label_1060c8;
        }
    }
    ctx->pc = 0x1060C4u;
    // 0x1060c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1060c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1060c8:
    // 0x1060c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1060c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1060cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1060ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1060d0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1060d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1060d4: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1060d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1060d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1060d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1060dc: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1060DCu;
    {
        const bool branch_taken_0x1060dc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1060E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060DCu;
        // 0x1060e0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060dc) {
            ctx->pc = 0x1060E8u;
            goto label_1060e8;
        }
    }
    ctx->pc = 0x1060E4u;
    // 0x1060e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1060e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1060e8:
    // 0x1060e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1060e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1060ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1060ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1060f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1060f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1060f4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1060f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1060f8: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1060F8u;
    {
        const bool branch_taken_0x1060f8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1060FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060F8u;
        // 0x1060fc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060f8) {
            ctx->pc = 0x10610Cu;
            goto label_10610c;
        }
    }
    ctx->pc = 0x106100u;
    // 0x106100: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x106100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x106104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106104u;
    {
        const bool branch_taken_0x106104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106104u;
        // 0x106108: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106104) {
            ctx->pc = 0x106110u;
            goto label_106110;
        }
    }
    ctx->pc = 0x10610Cu;
label_10610c:
    // 0x10610c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x10610cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_106110:
    // 0x106110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106114: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x106114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x106118: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106118u;
    {
        const bool branch_taken_0x106118 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x10611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106118u;
        // 0x10611c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106118) {
            ctx->pc = 0x106128u;
            goto label_106128;
        }
    }
    ctx->pc = 0x106120u;
    // 0x106120: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x106120u;
    {
        const bool branch_taken_0x106120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106120u;
        // 0x106124: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106120) {
            ctx->pc = 0x1060A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1060a4;
        }
    }
    ctx->pc = 0x106128u;
label_106128:
    // 0x106128: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x106128u;
    {
        const bool branch_taken_0x106128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106128u;
        // 0x10612c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106128) {
            ctx->pc = 0x1060A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1060a8;
        }
    }
    ctx->pc = 0x106130u;
label_106130:
    // 0x106130: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x106130u;
    {
        const bool branch_taken_0x106130 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x106134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106130u;
        // 0x106134: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106130) {
            ctx->pc = 0x106144u;
            goto label_106144;
        }
    }
    ctx->pc = 0x106138u;
    // 0x106138: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x106138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10613c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10613Cu;
    {
        const bool branch_taken_0x10613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10613Cu;
        // 0x106140: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10613c) {
            ctx->pc = 0x106148u;
            goto label_106148;
        }
    }
    ctx->pc = 0x106144u;
label_106144:
    // 0x106144: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x106144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_106148:
    // 0x106148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10614c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10614cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x106150: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106150u;
    {
        const bool branch_taken_0x106150 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x106154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106150u;
        // 0x106154: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106150) {
            ctx->pc = 0x106164u;
            goto label_106164;
        }
    }
    ctx->pc = 0x106158u;
    // 0x106158: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x106158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10615c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10615Cu;
    {
        const bool branch_taken_0x10615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10615Cu;
        // 0x106160: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10615c) {
            ctx->pc = 0x106168u;
            goto label_106168;
        }
    }
    ctx->pc = 0x106164u;
label_106164:
    // 0x106164: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x106164u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_106168:
    // 0x106168: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x106168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10616c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x10616cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x106170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106174: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x106174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x106178: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106178u;
    {
        const bool branch_taken_0x106178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106178u;
        // 0x10617c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106178) {
            ctx->pc = 0x10618Cu;
            goto label_10618c;
        }
    }
    ctx->pc = 0x106180u;
    // 0x106180: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x106180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x106184: 0x3e00008  jr          $ra
    ctx->pc = 0x106184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106184u;
        // 0x106188: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10618Cu;
label_10618c:
    // 0x10618c: 0x3e00008  jr          $ra
    ctx->pc = 0x10618Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10618Cu;
        // 0x106190: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10618Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106194u;
    // 0x106194: 0x0  nop
    ctx->pc = 0x106194u;
    // NOP
    ctx->pc = 0x106198u;
}
