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

// Function: sub_0020BA38
// Address: 0x20ba38 - 0x20bba8
void sub_0020BA38_0x20ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BA38_0x20ba38");
#endif

    switch (ctx->pc) {
        case 0x20ba80u: goto label_20ba80;
        case 0x20ba88u: goto label_20ba88;
        case 0x20baacu: goto label_20baac;
        case 0x20bab4u: goto label_20bab4;
        case 0x20babcu: goto label_20babc;
        case 0x20bb14u: goto label_20bb14;
        case 0x20bb2cu: goto label_20bb2c;
        case 0x20bb44u: goto label_20bb44;
        case 0x20bb88u: goto label_20bb88;
        default: break;
    }

    ctx->pc = 0x20ba38u;

    // 0x20ba38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20ba3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ba3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ba40: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x20ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x20ba44: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x20BA44u;
    {
        const bool branch_taken_0x20ba44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA44u;
        // 0x20ba48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba44) {
            ctx->pc = 0x20BAB4u;
            goto label_20bab4;
        }
    }
    ctx->pc = 0x20BA4Cu;
    // 0x20ba4c: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x20ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20ba50: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ba54: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x20ba54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20ba58: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20BA58u;
    {
        const bool branch_taken_0x20ba58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA58u;
        // 0x20ba5c: 0xaf849730  sw          $a0, -0x68D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba58) {
            ctx->pc = 0x20BA90u;
            goto label_20ba90;
        }
    }
    ctx->pc = 0x20BA60u;
    // 0x20ba60: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20ba64: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x20ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20ba68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x20ba6c: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x20ba6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x20ba70: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20BA70u;
    {
        const bool branch_taken_0x20ba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ba70) {
            ctx->pc = 0x20BA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BA70u;
            // 0x20ba74: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BA78u;
            goto label_20ba78;
        }
    }
    ctx->pc = 0x20BA78u;
label_20ba78:
    // 0x20ba78: 0xc086408  jal         func_219020
    ctx->pc = 0x20BA78u;
    SET_GPR_U32(ctx, 31, 0x20BA80u);
    ctx->pc = 0x20BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA78u;
    // 0x20ba7c: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x20BA78u, 0x20BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA80u;
label_20ba80:
    // 0x20ba80: 0xc091a7c  jal         func_2469F0
    ctx->pc = 0x20BA80u;
    SET_GPR_U32(ctx, 31, 0x20BA88u);
    ctx->pc = 0x20BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA80u;
    // 0x20ba84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469F0u, 0x20BA80u, 0x20BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA88u;
label_20ba88:
    // 0x20ba88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20BA88u;
    {
        const bool branch_taken_0x20ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ba88) {
            ctx->pc = 0x20BAB4u;
            goto label_20bab4;
        }
    }
    ctx->pc = 0x20BA90u;
label_20ba90:
    // 0x20ba90: 0x2402008e  addiu       $v0, $zero, 0x8E
    ctx->pc = 0x20ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x20ba94: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20BA94u;
    {
        const bool branch_taken_0x20ba94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA94u;
        // 0x20ba98: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba94) {
            ctx->pc = 0x20BAB4u;
            goto label_20bab4;
        }
    }
    ctx->pc = 0x20BA9Cu;
    // 0x20ba9c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BA9Cu;
    {
        const bool branch_taken_0x20ba9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ba9c) {
            ctx->pc = 0x20BAB4u;
            goto label_20bab4;
        }
    }
    ctx->pc = 0x20BAA4u;
    // 0x20baa4: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x20BAA4u;
    SET_GPR_U32(ctx, 31, 0x20BAACu);
    ctx->pc = 0x20BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BAA4u;
    // 0x20baa8: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x20BAA4u, 0x20BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAACu;
label_20baac:
    // 0x20baac: 0xc082162  jal         func_208588
    ctx->pc = 0x20BAACu;
    SET_GPR_U32(ctx, 31, 0x20BAB4u);
    ctx->pc = 0x20BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BAACu;
    // 0x20bab0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20BAACu, 0x20BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAB4u;
label_20bab4:
    // 0x20bab4: 0xc0845f8  jal         func_2117E0
    ctx->pc = 0x20BAB4u;
    SET_GPR_U32(ctx, 31, 0x20BABCu);
    ctx->pc = 0x2117E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2117E0u, 0x20BAB4u, 0x20BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BABCu;
label_20babc:
    // 0x20babc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20BABCu;
    {
        const bool branch_taken_0x20babc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BABCu;
        // 0x20bac0: 0x8f8298ac  lw          $v0, -0x6754($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20babc) {
            ctx->pc = 0x20BB98u;
            goto label_20bb98;
        }
    }
    ctx->pc = 0x20BAC4u;
    // 0x20bac4: 0x8f84c8cc  lw          $a0, -0x3734($gp)
    ctx->pc = 0x20bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953164)));
    // 0x20bac8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20bacc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BACCu;
    {
        const bool branch_taken_0x20bacc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BACCu;
        // 0x20bad0: 0xaf8398ac  sw          $v1, -0x6754($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bacc) {
            ctx->pc = 0x20BADCu;
            goto label_20badc;
        }
    }
    ctx->pc = 0x20BAD4u;
    // 0x20bad4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20bad8: 0xa04083c4  sb          $zero, -0x7C3C($v0)
    ctx->pc = 0x20bad8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A83C4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83C4u, _value); } while (0);
label_20badc:
    // 0x20badc: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x20badcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20bae0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20BAE0u;
    {
        const bool branch_taken_0x20bae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAE0u;
        // 0x20bae4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bae0) {
            ctx->pc = 0x20BB34u;
            goto label_20bb34;
        }
    }
    ctx->pc = 0x20BAE8u;
    // 0x20bae8: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x20bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20baec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20baf0: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x20baf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x20baf4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20BAF4u;
    {
        const bool branch_taken_0x20baf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20baf4) {
            ctx->pc = 0x20BAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BAF4u;
            // 0x20baf8: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BAFCu;
            goto label_20bafc;
        }
    }
    ctx->pc = 0x20BAFCu;
label_20bafc:
    // 0x20bafc: 0x8463009e  lh          $v1, 0x9E($v1)
    ctx->pc = 0x20bafcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 158)));
    // 0x20bb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bb04: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20BB04u;
    {
        const bool branch_taken_0x20bb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20bb04) {
            ctx->pc = 0x20BB34u;
            goto label_20bb34;
        }
    }
    ctx->pc = 0x20BB0Cu;
    // 0x20bb0c: 0xc07e26e  jal         func_1F89B8
    ctx->pc = 0x20BB0Cu;
    SET_GPR_U32(ctx, 31, 0x20BB14u);
    ctx->pc = 0x20BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB0Cu;
    // 0x20bb10: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B8u, 0x20BB0Cu, 0x20BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB14u;
label_20bb14:
    // 0x20bb14: 0x8f82c8cc  lw          $v0, -0x3734($gp)
    ctx->pc = 0x20bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953164)));
    // 0x20bb18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BB18u;
    {
        const bool branch_taken_0x20bb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB18u;
        // 0x20bb1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb18) {
            ctx->pc = 0x20BB30u;
            goto label_20bb30;
        }
    }
    ctx->pc = 0x20BB20u;
    // 0x20bb20: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x20bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x20bb24: 0xc092460  jal         func_249180
    ctx->pc = 0x20BB24u;
    SET_GPR_U32(ctx, 31, 0x20BB2Cu);
    ctx->pc = 0x20BB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB24u;
    // 0x20bb28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x20BB24u, 0x20BB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB2Cu;
label_20bb2c:
    // 0x20bb2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bb30:
    // 0x20bb30: 0xaf84c8cc  sw          $a0, -0x3734($gp)
    ctx->pc = 0x20bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953164), GPR_U32(ctx, 4));
label_20bb34:
    // 0x20bb34: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20BB34u;
    {
        const bool branch_taken_0x20bb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB34u;
        // 0x20bb38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb34) {
            ctx->pc = 0x20BBA0u;
            goto label_20bba0;
        }
    }
    ctx->pc = 0x20BB3Cu;
    // 0x20bb3c: 0xc08b84c  jal         func_22E130
    ctx->pc = 0x20BB3Cu;
    SET_GPR_U32(ctx, 31, 0x20BB44u);
    ctx->pc = 0x20BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB3Cu;
    // 0x20bb40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E130u, 0x20BB3Cu, 0x20BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB44u;
label_20bb44:
    // 0x20bb44: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20bb48: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x20bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20bb4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x20bb50: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x20bb50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x20bb54: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20BB54u;
    {
        const bool branch_taken_0x20bb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bb54) {
            ctx->pc = 0x20BB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BB54u;
            // 0x20bb58: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BB5Cu;
            goto label_20bb5c;
        }
    }
    ctx->pc = 0x20BB5Cu;
label_20bb5c:
    // 0x20bb5c: 0x9462003c  lhu         $v0, 0x3C($v1)
    ctx->pc = 0x20bb5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x20bb60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20bb64: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x20bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x20bb68: 0x8c63a850  lw          $v1, -0x57B0($v1)
    ctx->pc = 0x20bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944848)));
    // 0x20bb6c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x20bb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x20bb70: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20BB70u;
    {
        const bool branch_taken_0x20bb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB70u;
        // 0x20bb74: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb70) {
            ctx->pc = 0x20BB9Cu;
            goto label_20bb9c;
        }
    }
    ctx->pc = 0x20BB78u;
    // 0x20bb78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bb7c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x20bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x20bb80: 0xc07ce42  jal         func_1F3908
    ctx->pc = 0x20BB80u;
    SET_GPR_U32(ctx, 31, 0x20BB88u);
    ctx->pc = 0x20BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB80u;
    // 0x20bb84: 0xa06283c4  sb          $v0, -0x7C3C($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294935492), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3908u, 0x20BB80u, 0x20BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB88u;
label_20bb88:
    // 0x20bb88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bb8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20bb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bb90: 0x807e252  j           func_1F8948
    ctx->pc = 0x20BB90u;
    ctx->pc = 0x20BB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB90u;
    // 0x20bb94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8948u;
    sub_001F8948_0x1f8948(rdram, ctx, runtime); return;
    ctx->pc = 0x20BB98u;
label_20bb98:
    // 0x20bb98: 0xaf80c8cc  sw          $zero, -0x3734($gp)
    ctx->pc = 0x20bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953164), GPR_U32(ctx, 0));
label_20bb9c:
    // 0x20bb9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20bb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20bba0:
    // 0x20bba0: 0x3e00008  jr          $ra
    ctx->pc = 0x20BBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA0u;
        // 0x20bba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BBA8u;
}
