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

// Function: sub_002D2FD8
// Address: 0x2d2fd8 - 0x2d3140
void sub_002D2FD8_0x2d2fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2FD8_0x2d2fd8");
#endif

    switch (ctx->pc) {
        case 0x2d3014u: goto label_2d3014;
        case 0x2d3020u: goto label_2d3020;
        case 0x2d302cu: goto label_2d302c;
        case 0x2d3048u: goto label_2d3048;
        case 0x2d3054u: goto label_2d3054;
        case 0x2d3058u: goto label_2d3058;
        case 0x2d3070u: goto label_2d3070;
        case 0x2d3094u: goto label_2d3094;
        case 0x2d30acu: goto label_2d30ac;
        case 0x2d30c0u: goto label_2d30c0;
        case 0x2d30ccu: goto label_2d30cc;
        case 0x2d30ecu: goto label_2d30ec;
        case 0x2d30f4u: goto label_2d30f4;
        case 0x2d310cu: goto label_2d310c;
        default: break;
    }

    ctx->pc = 0x2d2fd8u;

    // 0x2d2fd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d2fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d2fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d2fe8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d2fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d2fec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d2fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ff0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d2ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d2ff4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d2ff8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2d2ffc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d3000: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d3000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d3004: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d3004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d3008: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d300c: 0xc0b5080  jal         func_2D4200
    ctx->pc = 0x2D300Cu;
    SET_GPR_U32(ctx, 31, 0x2D3014u);
    ctx->pc = 0x2D3010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D300Cu;
    // 0x2d3010: 0x3c1e003b  lui         $fp, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4200u, 0x2D300Cu, 0x2D3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3014u;
label_2d3014:
    // 0x2d3014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3018: 0xc0b5080  jal         func_2D4200
    ctx->pc = 0x2D3018u;
    SET_GPR_U32(ctx, 31, 0x2D3020u);
    ctx->pc = 0x2D301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3018u;
    // 0x2d301c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4200u, 0x2D3018u, 0x2D3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3020u;
label_2d3020:
    // 0x2d3020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3024: 0xc0b5084  jal         func_2D4210
    ctx->pc = 0x2D3024u;
    SET_GPR_U32(ctx, 31, 0x2D302Cu);
    ctx->pc = 0x2D3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3024u;
    // 0x2d3028: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4210u, 0x2D3024u, 0x2D302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D302Cu;
label_2d302c:
    // 0x2d302c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d302cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3030: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d3030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d3034: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3038: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x2d3038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x2d303c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2d303cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d3040: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D3040u;
    SET_GPR_U32(ctx, 31, 0x2D3048u);
    ctx->pc = 0x2D3044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3040u;
    // 0x2d3044: 0x223b021  addu        $s6, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D3040u, 0x2D3048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3048u;
label_2d3048:
    // 0x2d3048: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d3048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d304c: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x2D304Cu;
    SET_GPR_U32(ctx, 31, 0x2D3054u);
    ctx->pc = 0x2D3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D304Cu;
    // 0x2d3050: 0x24050a20  addiu       $a1, $zero, 0xA20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x2D304Cu, 0x2D3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3054u;
label_2d3054:
    // 0x2d3054: 0x8fd3fb00  lw          $s3, -0x500($fp)
    ctx->pc = 0x2d3054u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966016)));
label_2d3058:
    // 0x2d3058: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d3058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d305c: 0x267402d0  addiu       $s4, $s3, 0x2D0
    ctx->pc = 0x2d305cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 720));
    // 0x2d3060: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2d3060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3064: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2d3064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3068: 0x2b22021  addu        $a0, $s5, $s2
    ctx->pc = 0x2d3068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2d306c: 0x0  nop
    ctx->pc = 0x2d306cu;
    // NOP
label_2d3070:
    // 0x2d3070: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d3070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d3074: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d3074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3078: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x2d3078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2d307c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2d307cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3080: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2d3080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d3084: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x2d3084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2d3088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d3088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d308c: 0xc0b4a7e  jal         func_2D29F8
    ctx->pc = 0x2D308Cu;
    SET_GPR_U32(ctx, 31, 0x2D3094u);
    ctx->pc = 0x2D3090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D308Cu;
    // 0x2d3090: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D29F8u, 0x2D308Cu, 0x2D3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3094u;
label_2d3094:
    // 0x2d3094: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x2d3094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2d3098: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D3098u;
    {
        const bool branch_taken_0x2d3098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3098) {
            ctx->pc = 0x2D309Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3098u;
            // 0x2d309c: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3070;
        }
    }
    ctx->pc = 0x2D30A0u;
    // 0x2d30a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d30a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d30a4: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D30A4u;
    SET_GPR_U32(ctx, 31, 0x2D30ACu);
    ctx->pc = 0x2D30A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30A4u;
    // 0x2d30a8: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D30A4u, 0x2D30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30ACu;
label_2d30ac:
    // 0x2d30ac: 0x152980  sll         $a1, $s5, 6
    ctx->pc = 0x2d30acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x2d30b0: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x2d30b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2d30b4: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2d30b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2d30b8: 0xc093672  jal         func_24D9C8
    ctx->pc = 0x2D30B8u;
    SET_GPR_U32(ctx, 31, 0x2D30C0u);
    ctx->pc = 0x2D30BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30B8u;
    // 0x2d30bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D9C8u, 0x2D30B8u, 0x2D30C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30C0u;
label_2d30c0:
    // 0x2d30c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d30c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d30c4: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D30C4u;
    SET_GPR_U32(ctx, 31, 0x2D30CCu);
    ctx->pc = 0x2D30C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30C4u;
    // 0x2d30c8: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D30C4u, 0x2D30CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30CCu;
label_2d30cc:
    // 0x2d30cc: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x2d30ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2d30d0: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x2d30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x2d30d4: 0x26b50009  addiu       $s5, $s5, 0x9
    ctx->pc = 0x2d30d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x2d30d8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2d30d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d30dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d30dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30e0: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x2d30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x2d30e4: 0xc093672  jal         func_24D9C8
    ctx->pc = 0x2D30E4u;
    SET_GPR_U32(ctx, 31, 0x2D30ECu);
    ctx->pc = 0x2D30E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30E4u;
    // 0x2d30e8: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D9C8u, 0x2D30E4u, 0x2D30ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30ECu;
label_2d30ec:
    // 0x2d30ec: 0xc09368c  jal         func_24DA30
    ctx->pc = 0x2D30ECu;
    SET_GPR_U32(ctx, 31, 0x2D30F4u);
    ctx->pc = 0x24DA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DA30u, 0x2D30ECu, 0x2D30F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30F4u;
label_2d30f4:
    // 0x2d30f4: 0x2aa3005a  slti        $v1, $s5, 0x5A
    ctx->pc = 0x2d30f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2d30f8: 0x5460ffd7  bnel        $v1, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2D30F8u;
    {
        const bool branch_taken_0x2d30f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d30f8) {
            ctx->pc = 0x2D30FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D30F8u;
            // 0x2d30fc: 0x8fd3fb00  lw          $s3, -0x500($fp) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3058;
        }
    }
    ctx->pc = 0x2D3100u;
    // 0x2d3100: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d3100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d3104: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D3104u;
    SET_GPR_U32(ctx, 31, 0x2D310Cu);
    ctx->pc = 0x2D3108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3104u;
    // 0x2d3108: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D3104u, 0x2D310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D310Cu;
label_2d310c:
    // 0x2d310c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d310cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d3114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d3118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d311c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d311cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3120: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d3120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d3124: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d3124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3128: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d3128u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d312c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d312cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3130: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d3130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d3134: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3134u;
        // 0x2d3138: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D313Cu;
    // 0x2d313c: 0x0  nop
    ctx->pc = 0x2d313cu;
    // NOP
    ctx->pc = 0x2d3140u;
}
