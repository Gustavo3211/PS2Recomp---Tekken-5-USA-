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

// Function: sub_004CFFB8
// Address: 0x4cffb8 - 0x4d00e0
void sub_004CFFB8_0x4cffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CFFB8_0x4cffb8");
#endif

    switch (ctx->pc) {
        case 0x4d0018u: goto label_4d0018;
        case 0x4d0048u: goto label_4d0048;
        case 0x4d0088u: goto label_4d0088;
        case 0x4d00acu: goto label_4d00ac;
        default: break;
    }

    ctx->pc = 0x4cffb8u;

    // 0x4cffb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cffb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4cffbc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cffbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cffc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cffc4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cffc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cffcc: 0x24d10fe8  addiu       $s1, $a2, 0xFE8
    ctx->pc = 0x4cffccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4072));
    // 0x4cffd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cffd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4cffd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cffd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cffdc: 0x24b30fcc  addiu       $s3, $a1, 0xFCC
    ctx->pc = 0x4cffdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4044));
    // 0x4cffe0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cffe4: 0x26430166  addiu       $v1, $s2, 0x166
    ctx->pc = 0x4cffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 358));
    // 0x4cffe8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4cffec: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x4cffecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfff0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cfff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4cfff4: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x4cfff4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x4cfff8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4cfff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4cfffc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4cfffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x4d0000: 0x249473b8  addiu       $s4, $a0, 0x73B8
    ctx->pc = 0x4d0000u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 29624));
    // 0x4d0004: 0x26500168  addiu       $s0, $s2, 0x168
    ctx->pc = 0x4d0004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 360));
    // 0x4d0008: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d0008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d000c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d0010: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d0010u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0014: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x4d0014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x7F0FE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0FE8u, _value); } while (0);
label_4d0018:
    // 0x4d0018: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d0018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d001c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d001cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d0020: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d0020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d0024: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d0024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d0028: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4d0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4d002c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d002cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d0030: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4d0030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d0034: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d0034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d0038: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D0038u;
    {
        const bool branch_taken_0x4d0038 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4D003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0038u;
        // 0x4d003c: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0038) {
            ctx->pc = 0x4D0050u;
            goto label_4d0050;
        }
    }
    ctx->pc = 0x4D0040u;
    // 0x4d0040: 0xc134038  jal         func_4D00E0
    ctx->pc = 0x4D0040u;
    SET_GPR_U32(ctx, 31, 0x4D0048u);
    ctx->pc = 0x4D0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0040u;
    // 0x4d0044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D00E0u, 0x4D0040u, 0x4D0048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0048u;
label_4d0048:
    // 0x4d0048: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4D0048u;
    {
        const bool branch_taken_0x4d0048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0048u;
        // 0x4d004c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0048) {
            ctx->pc = 0x4D00B8u;
            goto label_4d00b8;
        }
    }
    ctx->pc = 0x4D0050u;
label_4d0050:
    // 0x4d0050: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4d0050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d0054: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d0054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4d0058: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4d0058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d005c: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x4d005cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x4d0060: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4d0060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4d0064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0068: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d0068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d006c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d006cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4d0070: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d0070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d0074: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d0074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d0078: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D0078u;
    {
        const bool branch_taken_0x4d0078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0078) {
            ctx->pc = 0x4D007Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0078u;
            // 0x4d007c: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0090u;
            goto label_4d0090;
        }
    }
    ctx->pc = 0x4D0080u;
    // 0x4d0080: 0xc13403e  jal         func_4D00F8
    ctx->pc = 0x4D0080u;
    SET_GPR_U32(ctx, 31, 0x4D0088u);
    ctx->pc = 0x4D0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0080u;
    // 0x4d0084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D00F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D00F8u, 0x4D0080u, 0x4D0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0088u;
label_4d0088:
    // 0x4d0088: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4D0088u;
    {
        const bool branch_taken_0x4d0088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0088u;
        // 0x4d008c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0088) {
            ctx->pc = 0x4D00B8u;
            goto label_4d00b8;
        }
    }
    ctx->pc = 0x4D0090u;
label_4d0090:
    // 0x4d0090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d0090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0094: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4d0094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4d0098: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4d0098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d009c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4d009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d00a0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d00a4: 0xc134040  jal         func_4D0100
    ctx->pc = 0x4D00A4u;
    SET_GPR_U32(ctx, 31, 0x4D00ACu);
    ctx->pc = 0x4D00A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D00A4u;
    // 0x4d00a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D0100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D0100u, 0x4D00A4u, 0x4D00ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D00ACu;
label_4d00ac:
    // 0x4d00ac: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x4D00ACu;
    {
        const bool branch_taken_0x4d00ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D00ACu;
        // 0x4d00b0: 0xae340000  sw          $s4, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d00ac) {
            ctx->pc = 0x4D0018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0018;
        }
    }
    ctx->pc = 0x4D00B4u;
    // 0x4d00b4: 0x0  nop
    ctx->pc = 0x4d00b4u;
    // NOP
label_4d00b8:
    // 0x4d00b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d00b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d00bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d00bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d00c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d00c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d00c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d00c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d00c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d00c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d00cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d00ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d00d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d00d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d00d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D00D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D00D4u;
        // 0x4d00d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D00D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D00DCu;
    // 0x4d00dc: 0x0  nop
    ctx->pc = 0x4d00dcu;
    // NOP
    ctx->pc = 0x4d00e0u;
}
