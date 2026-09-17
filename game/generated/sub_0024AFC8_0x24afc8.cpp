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

// Function: sub_0024AFC8
// Address: 0x24afc8 - 0x24b0b0
void sub_0024AFC8_0x24afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AFC8_0x24afc8");
#endif

    switch (ctx->pc) {
        case 0x24b048u: goto label_24b048;
        case 0x24b058u: goto label_24b058;
        case 0x24b0a0u: goto label_24b0a0;
        default: break;
    }

    ctx->pc = 0x24afc8u;

    // 0x24afc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24afcc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x24afccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24afd4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x24afd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24afd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24afdc: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x24afdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x24afe0: 0x8d020890  lw          $v0, 0x890($t0)
    ctx->pc = 0x24afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2192)));
    // 0x24afe4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x24AFE4u;
    {
        const bool branch_taken_0x24afe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFE4u;
        // 0x24afe8: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afe4) {
            ctx->pc = 0x24B0A0u;
            goto label_24b0a0;
        }
    }
    ctx->pc = 0x24AFECu;
    // 0x24afec: 0x90a201ef  lbu         $v0, 0x1EF($a1)
    ctx->pc = 0x24afecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 495)));
    // 0x24aff0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AFF0u;
    {
        const bool branch_taken_0x24aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aff0) {
            ctx->pc = 0x24AFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AFF0u;
            // 0x24aff4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B010u;
            goto label_24b010;
        }
    }
    ctx->pc = 0x24AFF8u;
    // 0x24aff8: 0x8ca2069c  lw          $v0, 0x69C($a1)
    ctx->pc = 0x24aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
    // 0x24affc: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AFFCu;
    {
        const bool branch_taken_0x24affc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x24affc) {
            ctx->pc = 0x24B000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AFFCu;
            // 0x24b000: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B010u;
            goto label_24b010;
        }
    }
    ctx->pc = 0x24B004u;
    // 0x24b004: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24b008: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24B008u;
    {
        const bool branch_taken_0x24b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B008u;
        // 0x24b00c: 0x24100011  addiu       $s0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b008) {
            ctx->pc = 0x24B08Cu;
            goto label_24b08c;
        }
    }
    ctx->pc = 0x24B010u;
label_24b010:
    // 0x24b010: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24b010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24b014: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x24B014u;
    {
        const bool branch_taken_0x24b014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b014) {
            ctx->pc = 0x24B018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B014u;
            // 0x24b018: 0x910201fe  lbu         $v0, 0x1FE($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 510)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B060u;
            goto label_24b060;
        }
    }
    ctx->pc = 0x24B01Cu;
    // 0x24b01c: 0x910201f0  lbu         $v0, 0x1F0($t0)
    ctx->pc = 0x24b01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 496)));
    // 0x24b020: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x24B020u;
    {
        const bool branch_taken_0x24b020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b020) {
            ctx->pc = 0x24B024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B020u;
            // 0x24b024: 0x910201fe  lbu         $v0, 0x1FE($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 510)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B060u;
            goto label_24b060;
        }
    }
    ctx->pc = 0x24B028u;
    // 0x24b028: 0x91020199  lbu         $v0, 0x199($t0)
    ctx->pc = 0x24b028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 409)));
    // 0x24b02c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24B02Cu;
    {
        const bool branch_taken_0x24b02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b02c) {
            ctx->pc = 0x24B030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B02Cu;
            // 0x24b030: 0x910201fe  lbu         $v0, 0x1FE($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 510)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B060u;
            goto label_24b060;
        }
    }
    ctx->pc = 0x24B034u;
    // 0x24b034: 0x90a201ee  lbu         $v0, 0x1EE($a1)
    ctx->pc = 0x24b034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 494)));
    // 0x24b038: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B038u;
    {
        const bool branch_taken_0x24b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b038) {
            ctx->pc = 0x24B050u;
            goto label_24b050;
        }
    }
    ctx->pc = 0x24B040u;
    // 0x24b040: 0xc092bea  jal         func_24AFA8
    ctx->pc = 0x24B040u;
    SET_GPR_U32(ctx, 31, 0x24B048u);
    ctx->pc = 0x24B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B040u;
    // 0x24b044: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AFA8u, 0x24B040u, 0x24B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B048u;
label_24b048:
    // 0x24b048: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24B048u;
    {
        const bool branch_taken_0x24b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b048) {
            ctx->pc = 0x24B090u;
            goto label_24b090;
        }
    }
    ctx->pc = 0x24B050u;
label_24b050:
    // 0x24b050: 0xc092ba6  jal         func_24AE98
    ctx->pc = 0x24B050u;
    SET_GPR_U32(ctx, 31, 0x24B058u);
    ctx->pc = 0x24B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B050u;
    // 0x24b054: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE98u, 0x24B050u, 0x24B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B058u;
label_24b058:
    // 0x24b058: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24B058u;
    {
        const bool branch_taken_0x24b058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b058) {
            ctx->pc = 0x24B090u;
            goto label_24b090;
        }
    }
    ctx->pc = 0x24B060u;
label_24b060:
    // 0x24b060: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24B060u;
    {
        const bool branch_taken_0x24b060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b060) {
            ctx->pc = 0x24B090u;
            goto label_24b090;
        }
    }
    ctx->pc = 0x24B068u;
    // 0x24b068: 0x8d0200c4  lw          $v0, 0xC4($t0)
    ctx->pc = 0x24b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x24b06c: 0x85040096  lh          $a0, 0x96($t0)
    ctx->pc = 0x24b06cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 150)));
    // 0x24b070: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x24b070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x24b074: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B074u;
    {
        const bool branch_taken_0x24b074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24b074) {
            ctx->pc = 0x24B090u;
            goto label_24b090;
        }
    }
    ctx->pc = 0x24B07Cu;
    // 0x24b07c: 0x91020199  lbu         $v0, 0x199($t0)
    ctx->pc = 0x24b07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 409)));
    // 0x24b080: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B080u;
    {
        const bool branch_taken_0x24b080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B080u;
        // 0x24b084: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b080) {
            ctx->pc = 0x24B090u;
            goto label_24b090;
        }
    }
    ctx->pc = 0x24B088u;
    // 0x24b088: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x24b088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_24b08c:
    // 0x24b08c: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x24b08cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_24b090:
    // 0x24b090: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B090u;
    {
        const bool branch_taken_0x24b090 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x24b090) {
            ctx->pc = 0x24B094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B090u;
            // 0x24b094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B0A4u;
            goto label_24b0a4;
        }
    }
    ctx->pc = 0x24B098u;
    // 0x24b098: 0xc09296c  jal         func_24A5B0
    ctx->pc = 0x24B098u;
    SET_GPR_U32(ctx, 31, 0x24B0A0u);
    ctx->pc = 0x24B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B098u;
    // 0x24b09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A5B0u, 0x24B098u, 0x24B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0A0u;
label_24b0a0:
    // 0x24b0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b0a4:
    // 0x24b0a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0A8u;
        // 0x24b0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B0B0u;
}
