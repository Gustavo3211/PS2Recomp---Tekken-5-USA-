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

// Function: sub_0049AF98
// Address: 0x49af98 - 0x49b0d0
void sub_0049AF98_0x49af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049AF98_0x49af98");
#endif

    switch (ctx->pc) {
        case 0x49b04cu: goto label_49b04c;
        default: break;
    }

    ctx->pc = 0x49af98u;

    // 0x49af98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49af98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49af9c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49afa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49afa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49afa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49afa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49afac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49afacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49afb0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x49afb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x49afb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49afb8: 0x2633014a  addiu       $s3, $s1, 0x14A
    ctx->pc = 0x49afb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 330));
    // 0x49afbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49afc0: 0x24540b64  addiu       $s4, $v0, 0xB64
    ctx->pc = 0x49afc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2916));
    // 0x49afc4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x49afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x49afc8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x49afc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x49afcc: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x49afccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x49afd0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x49afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B64u));
    // 0x49afd4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x49afd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49afd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49afd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49afdc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x49afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49afe0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49afe4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49afe8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x49afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x49afec: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x49afecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49aff0: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x49aff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49aff4: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x49AFF4u;
    {
        const bool branch_taken_0x49aff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFF4u;
        // 0x49aff8: 0x24850002  addiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aff4) {
            ctx->pc = 0x49B0A0u;
            goto label_49b0a0;
        }
    }
    ctx->pc = 0x49AFFCu;
    // 0x49affc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x49affcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x49b000: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49b000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49b004: 0x24a50b68  addiu       $a1, $a1, 0xB68
    ctx->pc = 0x49b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2920));
    // 0x49b008: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49b00c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B68u));
    // 0x49b010: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x49b010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x49b014: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x49b014u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49b018: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49b018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49b01c: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x49b01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49b020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49b020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49b024: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x49b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49b028: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49b028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49b02c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49b030: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49b034: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49b038: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49b03c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49b040: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49b040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49b044: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x49B044u;
    SET_GPR_U32(ctx, 31, 0x49B04Cu);
    ctx->pc = 0x49B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B044u;
    // 0x49b048: 0x84a40000  lh          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x49B044u, 0x49B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B04Cu;
label_49b04c:
    // 0x49b04c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49b050: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x49b050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49b054: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x49b054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x49b058: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49b058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49b05c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49b060: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49b060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49b064: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49b064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49b068: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x49b068u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x49b06c: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x49b06cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49b070: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x49b070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49b074: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x49b074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x49b078: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49B078u;
    {
        const bool branch_taken_0x49b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B078u;
        // 0x49b07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b078) {
            ctx->pc = 0x49B0A0u;
            goto label_49b0a0;
        }
    }
    ctx->pc = 0x49B080u;
    // 0x49b080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49b080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49b084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b088: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49b088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b08c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49b08cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49b090: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49b090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49b094: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x49b094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49b098: 0x8123392  j           func_48CE48
    ctx->pc = 0x49B098u;
    ctx->pc = 0x49B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B098u;
    // 0x49b09c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x49B0A0u;
label_49b0a0:
    // 0x49b0a0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x49b0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b0a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49b0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b0a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49b0ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49b0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b0b0: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x49b0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b0b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49b0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b0b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49b0b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49b0bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49b0bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49b0c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x49b0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49b0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x49B0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B0C4u;
        // 0x49b0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B0CCu;
    // 0x49b0cc: 0x0  nop
    ctx->pc = 0x49b0ccu;
    // NOP
    ctx->pc = 0x49b0d0u;
}
