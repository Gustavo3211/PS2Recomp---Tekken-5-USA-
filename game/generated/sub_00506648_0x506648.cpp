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

// Function: sub_00506648
// Address: 0x506648 - 0x506818
void sub_00506648_0x506648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506648_0x506648");
#endif

    switch (ctx->pc) {
        case 0x5066c4u: goto label_5066c4;
        case 0x506790u: goto label_506790;
        case 0x5067c8u: goto label_5067c8;
        case 0x5067d0u: goto label_5067d0;
        case 0x5067e0u: goto label_5067e0;
        case 0x506808u: goto label_506808;
        default: break;
    }

    ctx->pc = 0x506648u;

    // 0x506648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x506648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50664c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x506650: 0x3c130090  lui         $s3, 0x90
    ctx->pc = 0x506650u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)144 << 16));
    // 0x506654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x506654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x506658: 0x2670f080  addiu       $s0, $s3, -0xF80
    ctx->pc = 0x506658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50665c: 0x8602001a  lh          $v0, 0x1A($s0)
    ctx->pc = 0x50665cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8FF09Au));
    // 0x506660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x506660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x506664: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x506664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x506668: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x506668u;
    {
        const bool branch_taken_0x506668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506668u;
        // 0x50666c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506668) {
            ctx->pc = 0x5067A8u;
            goto label_5067a8;
        }
    }
    ctx->pc = 0x506670u;
    // 0x506670: 0x8e0a0050  lw          $t2, 0x50($s0)
    ctx->pc = 0x506670u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x506674: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x506674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506678: 0x8e090054  lw          $t1, 0x54($s0)
    ctx->pc = 0x506678u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x50667c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50667cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x506680: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x506680u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x506684: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x506684u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x506688: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x506688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x50668c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50668cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x506690: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x506690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x506694: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x506694u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x506698: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x506698u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x50669c: 0xac40c54c  sw          $zero, -0x3AB4($v0)
    ctx->pc = 0x50669cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC54Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC54Cu, _value); } while (0);
    // 0x5066a0: 0xac60c548  sw          $zero, -0x3AB8($v1)
    ctx->pc = 0x5066a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC548u, _value); } while (0);
    // 0x5066a4: 0xac80c544  sw          $zero, -0x3ABC($a0)
    ctx->pc = 0x5066a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC544u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC544u, _value); } while (0);
    // 0x5066a8: 0xaca0c540  sw          $zero, -0x3AC0($a1)
    ctx->pc = 0x5066a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC540u, _value); } while (0);
    // 0x5066ac: 0xacc0c53c  sw          $zero, -0x3AC4($a2)
    ctx->pc = 0x5066acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC53Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC53Cu, _value); } while (0);
    // 0x5066b0: 0xace0c538  sw          $zero, -0x3AC8($a3)
    ctx->pc = 0x5066b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC538u, _value); } while (0);
    // 0x5066b4: 0xad00c534  sw          $zero, -0x3ACC($t0)
    ctx->pc = 0x5066b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC534u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC534u, _value); } while (0);
    // 0x5066b8: 0xae2ac528  sw          $t2, -0x3AD8($s1)
    ctx->pc = 0x5066b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x8EC528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC528u, _value); } while (0);
    // 0x5066bc: 0xc14170a  jal         func_505C28
    ctx->pc = 0x5066BCu;
    SET_GPR_U32(ctx, 31, 0x5066C4u);
    ctx->pc = 0x5066C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5066BCu;
    // 0x5066c0: 0xae49c530  sw          $t1, -0x3AD0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294952240), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505C28u, 0x5066BCu, 0x5066C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5066C4u;
label_5066c4:
    // 0x5066c4: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x5066c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x5066c8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x5066c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x5066cc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x5066CCu;
    {
        const bool branch_taken_0x5066cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5066D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5066CCu;
        // 0x5066d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5066cc) {
            ctx->pc = 0x506788u;
            goto label_506788;
        }
    }
    ctx->pc = 0x5066D4u;
    // 0x5066d4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x5066d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x5066d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5066d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5066dc: 0x8c63d230  lw          $v1, -0x2DD0($v1)
    ctx->pc = 0x5066dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955568)));
    // 0x5066e0: 0x600008  jr          $v1
    ctx->pc = 0x5066E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x5066E8u: goto label_5066e8;
            case 0x5066F8u: goto label_5066f8;
            case 0x506708u: goto label_506708;
            case 0x506718u: goto label_506718;
            case 0x506728u: goto label_506728;
            case 0x506738u: goto label_506738;
            case 0x506748u: goto label_506748;
            case 0x506758u: goto label_506758;
            case 0x506768u: goto label_506768;
            case 0x506778u: goto label_506778;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5066E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5066E8u;
label_5066e8:
    // 0x5066e8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x5066e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x5066ec: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5066ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5066f0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x5066F0u;
    {
        const bool branch_taken_0x5066f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5066F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5066F0u;
        // 0x5066f4: 0x2442735e  addiu       $v0, $v0, 0x735E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29534));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5066f0) {
            ctx->pc = 0x506784u;
            goto label_506784;
        }
    }
    ctx->pc = 0x5066F8u;
label_5066f8:
    // 0x5066f8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x5066f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x5066fc: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5066fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506700: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x506700u;
    {
        const bool branch_taken_0x506700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506700u;
        // 0x506704: 0x244273b6  addiu       $v0, $v0, 0x73B6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29622));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506700) {
            ctx->pc = 0x506784u;
            goto label_506784;
        }
    }
    ctx->pc = 0x506708u;
label_506708:
    // 0x506708: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x506708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50670c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50670cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506710: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x506710u;
    {
        const bool branch_taken_0x506710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506710u;
        // 0x506714: 0x24427492  addiu       $v0, $v0, 0x7492 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29842));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506710) {
            ctx->pc = 0x506784u;
            goto label_506784;
        }
    }
    ctx->pc = 0x506718u;
label_506718:
    // 0x506718: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x506718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50671c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50671cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506720: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x506720u;
    {
        const bool branch_taken_0x506720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506720u;
        // 0x506724: 0x24427492  addiu       $v0, $v0, 0x7492 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29842));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506720) {
            ctx->pc = 0x506784u;
            goto label_506784;
        }
    }
    ctx->pc = 0x506728u;
label_506728:
    // 0x506728: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x506728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50672c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50672cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506730: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x506730u;
    {
        const bool branch_taken_0x506730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506730u;
        // 0x506734: 0x2442750a  addiu       $v0, $v0, 0x750A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29962));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506730) {
            ctx->pc = 0x506784u;
            goto label_506784;
        }
    }
    ctx->pc = 0x506738u;
label_506738:
    // 0x506738: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x506738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50673c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50673cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506740: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x506740u;
    {
        const bool branch_taken_0x506740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506740u;
        // 0x506744: 0x24427554  addiu       $v0, $v0, 0x7554 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506740) {
            ctx->pc = 0x506784u;
            goto label_506784;
        }
    }
    ctx->pc = 0x506748u;
label_506748:
    // 0x506748: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x506748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50674c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50674cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506750: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x506750u;
    {
        const bool branch_taken_0x506750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506750u;
        // 0x506754: 0x24427554  addiu       $v0, $v0, 0x7554 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506750) {
            ctx->pc = 0x506784u;
            goto label_506784;
        }
    }
    ctx->pc = 0x506758u;
label_506758:
    // 0x506758: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x506758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50675c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50675cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506760: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x506760u;
    {
        const bool branch_taken_0x506760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506760u;
        // 0x506764: 0x244275c0  addiu       $v0, $v0, 0x75C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506760) {
            ctx->pc = 0x506784u;
            goto label_506784;
        }
    }
    ctx->pc = 0x506768u;
label_506768:
    // 0x506768: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x506768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50676c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50676cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506770: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x506770u;
    {
        const bool branch_taken_0x506770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506770u;
        // 0x506774: 0x244275c0  addiu       $v0, $v0, 0x75C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506770) {
            ctx->pc = 0x506784u;
            goto label_506784;
        }
    }
    ctx->pc = 0x506778u;
label_506778:
    // 0x506778: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x506778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50677c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50677cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506780: 0x24427638  addiu       $v0, $v0, 0x7638
    ctx->pc = 0x506780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30264));
label_506784:
    // 0x506784: 0xac62c52c  sw          $v0, -0x3AD4($v1)
    ctx->pc = 0x506784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952236), GPR_U32(ctx, 2));
label_506788:
    // 0x506788: 0xc14195c  jal         func_506570
    ctx->pc = 0x506788u;
    SET_GPR_U32(ctx, 31, 0x506790u);
    ctx->pc = 0x506570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506570u, 0x506788u, 0x506790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506790u;
label_506790:
    // 0x506790: 0x2662f080  addiu       $v0, $s3, -0xF80
    ctx->pc = 0x506790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x506794: 0x8e23c528  lw          $v1, -0x3AD8($s1)
    ctx->pc = 0x506794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952232)));
    // 0x506798: 0x8e44c530  lw          $a0, -0x3AD0($s2)
    ctx->pc = 0x506798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952240)));
    // 0x50679c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x50679cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x5067a0: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x5067a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
    // 0x5067a4: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x5067a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
label_5067a8:
    // 0x5067a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5067a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5067ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5067acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5067b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5067b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5067b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5067b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5067b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5067b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5067bc: 0x3e00008  jr          $ra
    ctx->pc = 0x5067BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5067C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5067BCu;
        // 0x5067c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5067BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5067C4u;
    // 0x5067c4: 0x0  nop
    ctx->pc = 0x5067c4u;
    // NOP
label_5067c8:
    // 0x5067c8: 0x3e00008  jr          $ra
    ctx->pc = 0x5067C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5067C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5067D0u;
label_5067d0:
    // 0x5067d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5067d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5067d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5067d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5067d8: 0xc124620  jal         func_491880
    ctx->pc = 0x5067D8u;
    SET_GPR_U32(ctx, 31, 0x5067E0u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x5067D8u, 0x5067E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5067E0u;
label_5067e0:
    // 0x5067e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x5067e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x5067e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5067e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5067e8: 0x8463e820  lh          $v1, -0x17E0($v1)
    ctx->pc = 0x5067e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x5067ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5067ECu;
    {
        const bool branch_taken_0x5067ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5067F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5067ECu;
        // 0x5067f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5067ec) {
            ctx->pc = 0x506800u;
            goto label_506800;
        }
    }
    ctx->pc = 0x5067F4u;
    // 0x5067f4: 0x81419f2  j           func_5067C8
    ctx->pc = 0x5067F4u;
    ctx->pc = 0x5067F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5067F4u;
    // 0x5067f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5067C8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_5067c8;
    ctx->pc = 0x5067FCu;
    // 0x5067fc: 0x0  nop
    ctx->pc = 0x5067fcu;
    // NOP
label_506800:
    // 0x506800: 0xc142f92  jal         func_50BE48
    ctx->pc = 0x506800u;
    SET_GPR_U32(ctx, 31, 0x506808u);
    ctx->pc = 0x50BE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50BE48u, 0x506800u, 0x506808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506808u;
label_506808:
    // 0x506808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x506808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50680c: 0x81436a4  j           func_50DA90
    ctx->pc = 0x50680Cu;
    ctx->pc = 0x506810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50680Cu;
    // 0x506810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50DA90u;
    sub_0050DA90_0x50da90(rdram, ctx, runtime); return;
    ctx->pc = 0x506814u;
    // 0x506814: 0x0  nop
    ctx->pc = 0x506814u;
    // NOP
    ctx->pc = 0x506818u;
}
