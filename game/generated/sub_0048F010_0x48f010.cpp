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

// Function: sub_0048F010
// Address: 0x48f010 - 0x48f150
void sub_0048F010_0x48f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F010_0x48f010");
#endif

    switch (ctx->pc) {
        case 0x48f0f8u: goto label_48f0f8;
        case 0x48f114u: goto label_48f114;
        case 0x48f130u: goto label_48f130;
        default: break;
    }

    ctx->pc = 0x48f010u;

    // 0x48f010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48f014: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x48f014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48f01c: 0x24aa001c  addiu       $t2, $a1, 0x1C
    ctx->pc = 0x48f01cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x48f020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48f024: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x48f024u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x48f028: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x48f028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48f02c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x48f02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48f030: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x48f030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x48f034: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x48f034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x48f038: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x48f038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48f03c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x48f03cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48f040: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48F040u;
    {
        const bool branch_taken_0x48f040 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x48F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F040u;
        // 0x48f044: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f040) {
            ctx->pc = 0x48F058u;
            goto label_48f058;
        }
    }
    ctx->pc = 0x48F048u;
    // 0x48f048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48f048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f04c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48f04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48f050: 0x8123392  j           func_48CE48
    ctx->pc = 0x48F050u;
    ctx->pc = 0x48F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F050u;
    // 0x48f054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x48F058u;
label_48f058:
    // 0x48f058: 0x24b00020  addiu       $s0, $a1, 0x20
    ctx->pc = 0x48f058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x48f05c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x48f05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48f060: 0x54430034  bnel        $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x48F060u;
    {
        const bool branch_taken_0x48f060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x48f060) {
            ctx->pc = 0x48F064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F060u;
            // 0x48f064: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F134u;
            goto label_48f134;
        }
    }
    ctx->pc = 0x48F068u;
    // 0x48f068: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x48f068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48f06c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x48f06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x48f070: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x48f070u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48f074: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x48f074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x48f078: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x48f078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48f07c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x48f07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x48f080: 0x3504ffff  ori         $a0, $t0, 0xFFFF
    ctx->pc = 0x48f080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x48f084: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48f084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48f088: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x48f088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x48f08c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48f08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48f090: 0x824024  and         $t0, $a0, $v0
    ctx->pc = 0x48f090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48f094: 0x693024  and         $a2, $v1, $t1
    ctx->pc = 0x48f094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x48f098: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x48f098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x48f09c: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x48f09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x48f0a0: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x48f0a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x48f0a4: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x48f0a4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48f0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48f0ac: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x48f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x48f0b0: 0x11030013  beq         $t0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x48F0B0u;
    {
        const bool branch_taken_0x48f0b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x48F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0B0u;
        // 0x48f0b4: 0x853024  and         $a2, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0b0) {
            ctx->pc = 0x48F100u;
            goto label_48f100;
        }
    }
    ctx->pc = 0x48F0B8u;
    // 0x48f0b8: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x48f0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48f0bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48F0BCu;
    {
        const bool branch_taken_0x48f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0BCu;
        // 0x48f0c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0bc) {
            ctx->pc = 0x48F0D8u;
            goto label_48f0d8;
        }
    }
    ctx->pc = 0x48F0C4u;
    // 0x48f0c4: 0x51000008  beql        $t0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x48F0C4u;
    {
        const bool branch_taken_0x48f0c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f0c4) {
            ctx->pc = 0x48F0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F0C4u;
            // 0x48f0c8: 0xc92024  and         $a0, $a2, $t1 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F0E8u;
            goto label_48f0e8;
        }
    }
    ctx->pc = 0x48F0CCu;
    // 0x48f0cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x48F0CCu;
    {
        const bool branch_taken_0x48f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0CCu;
        // 0x48f0d0: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0cc) {
            ctx->pc = 0x48F134u;
            goto label_48f134;
        }
    }
    ctx->pc = 0x48F0D4u;
    // 0x48f0d4: 0x0  nop
    ctx->pc = 0x48f0d4u;
    // NOP
label_48f0d8:
    // 0x48f0d8: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x48F0D8u;
    {
        const bool branch_taken_0x48f0d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0D8u;
        // 0x48f0dc: 0xc92024  and         $a0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0d8) {
            ctx->pc = 0x48F120u;
            goto label_48f120;
        }
    }
    ctx->pc = 0x48F0E0u;
    // 0x48f0e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x48F0E0u;
    {
        const bool branch_taken_0x48f0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0E0u;
        // 0x48f0e4: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0e0) {
            ctx->pc = 0x48F134u;
            goto label_48f134;
        }
    }
    ctx->pc = 0x48F0E8u;
label_48f0e8:
    // 0x48f0e8: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x48f0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x48f0ec: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x48f0ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48f0f0: 0xc123bc8  jal         func_48EF20
    ctx->pc = 0x48F0F0u;
    SET_GPR_U32(ctx, 31, 0x48F0F8u);
    ctx->pc = 0x48F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F0F0u;
    // 0x48f0f4: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF20u, 0x48F0F0u, 0x48F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F0F8u;
label_48f0f8:
    // 0x48f0f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x48F0F8u;
    {
        const bool branch_taken_0x48f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0F8u;
        // 0x48f0fc: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0f8) {
            ctx->pc = 0x48F134u;
            goto label_48f134;
        }
    }
    ctx->pc = 0x48F100u;
label_48f100:
    // 0x48f100: 0xc92024  and         $a0, $a2, $t1
    ctx->pc = 0x48f100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x48f104: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x48f104u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x48f108: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x48f108u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48f10c: 0xc123bd2  jal         func_48EF48
    ctx->pc = 0x48F10Cu;
    SET_GPR_U32(ctx, 31, 0x48F114u);
    ctx->pc = 0x48F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F10Cu;
    // 0x48f110: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF48u, 0x48F10Cu, 0x48F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F114u;
label_48f114:
    // 0x48f114: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48F114u;
    {
        const bool branch_taken_0x48f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F114u;
        // 0x48f118: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f114) {
            ctx->pc = 0x48F134u;
            goto label_48f134;
        }
    }
    ctx->pc = 0x48F11Cu;
    // 0x48f11c: 0x0  nop
    ctx->pc = 0x48f11cu;
    // NOP
label_48f120:
    // 0x48f120: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x48f120u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x48f124: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x48f124u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48f128: 0xc123bdc  jal         func_48EF70
    ctx->pc = 0x48F128u;
    SET_GPR_U32(ctx, 31, 0x48F130u);
    ctx->pc = 0x48F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F128u;
    // 0x48f12c: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF70u, 0x48F128u, 0x48F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F130u;
label_48f130:
    // 0x48f130: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x48f130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_48f134:
    // 0x48f134: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48f134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48f138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48f13c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x48f13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48f140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48f140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f144: 0x3e00008  jr          $ra
    ctx->pc = 0x48F144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F144u;
        // 0x48f148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F14Cu;
    // 0x48f14c: 0x0  nop
    ctx->pc = 0x48f14cu;
    // NOP
    ctx->pc = 0x48f150u;
}
