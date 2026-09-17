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

// Function: sub_002CCFF8
// Address: 0x2ccff8 - 0x2cd538
void sub_002CCFF8_0x2ccff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCFF8_0x2ccff8");
#endif

    switch (ctx->pc) {
        case 0x2cd05cu: goto label_2cd05c;
        case 0x2cd064u: goto label_2cd064;
        case 0x2cd088u: goto label_2cd088;
        case 0x2cd094u: goto label_2cd094;
        case 0x2cd0a0u: goto label_2cd0a0;
        case 0x2cd0acu: goto label_2cd0ac;
        case 0x2cd0bcu: goto label_2cd0bc;
        case 0x2cd0ecu: goto label_2cd0ec;
        case 0x2cd118u: goto label_2cd118;
        case 0x2cd148u: goto label_2cd148;
        case 0x2cd178u: goto label_2cd178;
        case 0x2cd1a8u: goto label_2cd1a8;
        case 0x2cd1e4u: goto label_2cd1e4;
        case 0x2cd214u: goto label_2cd214;
        case 0x2cd248u: goto label_2cd248;
        case 0x2cd268u: goto label_2cd268;
        case 0x2cd290u: goto label_2cd290;
        case 0x2cd2a8u: goto label_2cd2a8;
        case 0x2cd2b0u: goto label_2cd2b0;
        case 0x2cd2d0u: goto label_2cd2d0;
        case 0x2cd2e8u: goto label_2cd2e8;
        case 0x2cd324u: goto label_2cd324;
        case 0x2cd34cu: goto label_2cd34c;
        case 0x2cd364u: goto label_2cd364;
        case 0x2cd384u: goto label_2cd384;
        case 0x2cd3c0u: goto label_2cd3c0;
        case 0x2cd3dcu: goto label_2cd3dc;
        case 0x2cd3f4u: goto label_2cd3f4;
        case 0x2cd424u: goto label_2cd424;
        case 0x2cd440u: goto label_2cd440;
        case 0x2cd458u: goto label_2cd458;
        case 0x2cd470u: goto label_2cd470;
        case 0x2cd4d8u: goto label_2cd4d8;
        case 0x2cd4f0u: goto label_2cd4f0;
        case 0x2cd508u: goto label_2cd508;
        default: break;
    }

    ctx->pc = 0x2ccff8u;

    // 0x2ccff8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ccff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ccffc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ccffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cd000: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cd000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cd004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cd008: 0x268500a0  addiu       $a1, $s4, 0xA0
    ctx->pc = 0x2cd008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x2cd00c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cd00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cd010: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cd010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cd014: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cd014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cd018: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cd018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cd01c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2cd01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2cd020: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2cd020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2cd024: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2cd024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2cd028: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2cd028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2cd02c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2cd02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cd030: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD030u;
    {
        const bool branch_taken_0x2cd030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd030) {
            ctx->pc = 0x2CD034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD030u;
            // 0x2cd034: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD04Cu;
            goto label_2cd04c;
        }
    }
    ctx->pc = 0x2CD038u;
    // 0x2cd038: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cd038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cd03c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cd040: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD040u;
    {
        const bool branch_taken_0x2cd040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD040u;
        // 0x2cd044: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd040) {
            ctx->pc = 0x2CD054u;
            goto label_2cd054;
        }
    }
    ctx->pc = 0x2CD048u;
    // 0x2cd048: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2cd048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2cd04c:
    // 0x2cd04c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cd04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd050: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2cd050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2cd054:
    // 0x2cd054: 0xc08661c  jal         func_219870
    ctx->pc = 0x2CD054u;
    SET_GPR_U32(ctx, 31, 0x2CD05Cu);
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x2CD054u, 0x2CD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD05Cu;
label_2cd05c:
    // 0x2cd05c: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CD05Cu;
    SET_GPR_U32(ctx, 31, 0x2CD064u);
    ctx->pc = 0x2CD060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD05Cu;
    // 0x2cd060: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CD05Cu, 0x2CD064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD064u;
label_2cd064:
    // 0x2cd064: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cd064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cd068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cd068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd06c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cd070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd074: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2cd074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2cd078: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cd078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd07c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2cd07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cd080: 0xc0b354e  jal         func_2CD538
    ctx->pc = 0x2CD080u;
    SET_GPR_U32(ctx, 31, 0x2CD088u);
    ctx->pc = 0x2CD084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD080u;
    // 0x2cd084: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD538u, 0x2CD080u, 0x2CD088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD088u;
label_2cd088:
    // 0x2cd088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cd088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd08c: 0xc0b3656  jal         func_2CD958
    ctx->pc = 0x2CD08Cu;
    SET_GPR_U32(ctx, 31, 0x2CD094u);
    ctx->pc = 0x2CD090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD08Cu;
    // 0x2cd090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD958u, 0x2CD08Cu, 0x2CD094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD094u;
label_2cd094:
    // 0x2cd094: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cd094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd098: 0xc0b37aa  jal         func_2CDEA8
    ctx->pc = 0x2CD098u;
    SET_GPR_U32(ctx, 31, 0x2CD0A0u);
    ctx->pc = 0x2CD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD098u;
    // 0x2cd09c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDEA8u, 0x2CD098u, 0x2CD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0A0u;
label_2cd0a0:
    // 0x2cd0a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cd0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0a4: 0xc0b36e6  jal         func_2CDB98
    ctx->pc = 0x2CD0A4u;
    SET_GPR_U32(ctx, 31, 0x2CD0ACu);
    ctx->pc = 0x2CD0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0A4u;
    // 0x2cd0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDB98u, 0x2CD0A4u, 0x2CD0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0ACu;
label_2cd0ac:
    // 0x2cd0ac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cd0b0: 0x24a5e948  addiu       $a1, $a1, -0x16B8
    ctx->pc = 0x2cd0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961480));
    // 0x2cd0b4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD0B4u;
    SET_GPR_U32(ctx, 31, 0x2CD0BCu);
    ctx->pc = 0x2CD0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0B4u;
    // 0x2cd0b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD0B4u, 0x2CD0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0BCu;
label_2cd0bc:
    // 0x2cd0bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD0BCu;
    {
        const bool branch_taken_0x2cd0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0BCu;
        // 0x2cd0c0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0bc) {
            ctx->pc = 0x2CD0E0u;
            goto label_2cd0e0;
        }
    }
    ctx->pc = 0x2CD0C4u;
    // 0x2cd0c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd0c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD0C8u;
    {
        const bool branch_taken_0x2cd0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0C8u;
        // 0x2cd0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0c8) {
            ctx->pc = 0x2CD0E4u;
            goto label_2cd0e4;
        }
    }
    ctx->pc = 0x2CD0D0u;
    // 0x2cd0d0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2cd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2cd0d4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cd0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cd0d8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2cd0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2cd0dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cd0e0:
    // 0x2cd0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cd0e4:
    // 0x2cd0e4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD0E4u;
    SET_GPR_U32(ctx, 31, 0x2CD0ECu);
    ctx->pc = 0x2CD0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0E4u;
    // 0x2cd0e8: 0x24a5e6a0  addiu       $a1, $a1, -0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD0E4u, 0x2CD0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0ECu;
label_2cd0ec:
    // 0x2cd0ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD0ECu;
    {
        const bool branch_taken_0x2cd0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0ECu;
        // 0x2cd0f0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0ec) {
            ctx->pc = 0x2CD10Cu;
            goto label_2cd10c;
        }
    }
    ctx->pc = 0x2CD0F4u;
    // 0x2cd0f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd0f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD0F8u;
    {
        const bool branch_taken_0x2cd0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd0f8) {
            ctx->pc = 0x2CD10Cu;
            goto label_2cd10c;
        }
    }
    ctx->pc = 0x2CD100u;
    // 0x2cd100: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2cd100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2cd104: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cd104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cd108: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2cd108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2cd10c:
    // 0x2cd10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd110: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD110u;
    SET_GPR_U32(ctx, 31, 0x2CD118u);
    ctx->pc = 0x2CD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD110u;
    // 0x2cd114: 0x24a5e968  addiu       $a1, $a1, -0x1698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD110u, 0x2CD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD118u;
label_2cd118:
    // 0x2cd118: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD118u;
    {
        const bool branch_taken_0x2cd118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd118) {
            ctx->pc = 0x2CD11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD118u;
            // 0x2cd11c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD13Cu;
            goto label_2cd13c;
        }
    }
    ctx->pc = 0x2CD120u;
    // 0x2cd120: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd124: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD124u;
    {
        const bool branch_taken_0x2cd124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD124u;
        // 0x2cd128: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd124) {
            ctx->pc = 0x2CD138u;
            goto label_2cd138;
        }
    }
    ctx->pc = 0x2CD12Cu;
    // 0x2cd12c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd130: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd134: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cd138:
    // 0x2cd138: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cd13c:
    // 0x2cd13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd140: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD140u;
    SET_GPR_U32(ctx, 31, 0x2CD148u);
    ctx->pc = 0x2CD144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD140u;
    // 0x2cd144: 0x24a5e980  addiu       $a1, $a1, -0x1680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD140u, 0x2CD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD148u;
label_2cd148:
    // 0x2cd148: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD148u;
    {
        const bool branch_taken_0x2cd148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd148) {
            ctx->pc = 0x2CD14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD148u;
            // 0x2cd14c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD16Cu;
            goto label_2cd16c;
        }
    }
    ctx->pc = 0x2CD150u;
    // 0x2cd150: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd154: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD154u;
    {
        const bool branch_taken_0x2cd154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD154u;
        // 0x2cd158: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd154) {
            ctx->pc = 0x2CD168u;
            goto label_2cd168;
        }
    }
    ctx->pc = 0x2CD15Cu;
    // 0x2cd15c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd160: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd164: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cd168:
    // 0x2cd168: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cd16c:
    // 0x2cd16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd170: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD170u;
    SET_GPR_U32(ctx, 31, 0x2CD178u);
    ctx->pc = 0x2CD174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD170u;
    // 0x2cd174: 0x24a5e998  addiu       $a1, $a1, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD170u, 0x2CD178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD178u;
label_2cd178:
    // 0x2cd178: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD178u;
    {
        const bool branch_taken_0x2cd178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd178) {
            ctx->pc = 0x2CD17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD178u;
            // 0x2cd17c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD19Cu;
            goto label_2cd19c;
        }
    }
    ctx->pc = 0x2CD180u;
    // 0x2cd180: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd184: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD184u;
    {
        const bool branch_taken_0x2cd184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD184u;
        // 0x2cd188: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd184) {
            ctx->pc = 0x2CD198u;
            goto label_2cd198;
        }
    }
    ctx->pc = 0x2CD18Cu;
    // 0x2cd18c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd190: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd194: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cd198:
    // 0x2cd198: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cd19c:
    // 0x2cd19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1a0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD1A0u;
    SET_GPR_U32(ctx, 31, 0x2CD1A8u);
    ctx->pc = 0x2CD1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD1A0u;
    // 0x2cd1a4: 0x24a5e9a8  addiu       $a1, $a1, -0x1658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD1A0u, 0x2CD1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1A8u;
label_2cd1a8:
    // 0x2cd1a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD1A8u;
    {
        const bool branch_taken_0x2cd1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1a8) {
            ctx->pc = 0x2CD1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD1A8u;
            // 0x2cd1ac: 0x8e830048  lw          $v1, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD1CCu;
            goto label_2cd1cc;
        }
    }
    ctx->pc = 0x2CD1B0u;
    // 0x2cd1b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd1b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD1B4u;
    {
        const bool branch_taken_0x2cd1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1B4u;
        // 0x2cd1b8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1b4) {
            ctx->pc = 0x2CD1C8u;
            goto label_2cd1c8;
        }
    }
    ctx->pc = 0x2CD1BCu;
    // 0x2cd1bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd1c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd1c4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cd1c8:
    // 0x2cd1c8: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x2cd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_2cd1cc:
    // 0x2cd1cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2cd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cd1d0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CD1D0u;
    {
        const bool branch_taken_0x2cd1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1D0u;
        // 0x2cd1d4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1d0) {
            ctx->pc = 0x2CD208u;
            goto label_2cd208;
        }
    }
    ctx->pc = 0x2CD1D8u;
    // 0x2cd1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1dc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD1DCu;
    SET_GPR_U32(ctx, 31, 0x2CD1E4u);
    ctx->pc = 0x2CD1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD1DCu;
    // 0x2cd1e0: 0x24a5e6b0  addiu       $a1, $a1, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD1DCu, 0x2CD1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1E4u;
label_2cd1e4:
    // 0x2cd1e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CD1E4u;
    {
        const bool branch_taken_0x2cd1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1E4u;
        // 0x2cd1e8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1e4) {
            ctx->pc = 0x2CD238u;
            goto label_2cd238;
        }
    }
    ctx->pc = 0x2CD1ECu;
    // 0x2cd1ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd1f0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CD1F0u;
    {
        const bool branch_taken_0x2cd1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1F0u;
        // 0x2cd1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1f0) {
            ctx->pc = 0x2CD23Cu;
            goto label_2cd23c;
        }
    }
    ctx->pc = 0x2CD1F8u;
    // 0x2cd1f8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2cd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2cd1fc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cd1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cd200: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CD200u;
    {
        const bool branch_taken_0x2cd200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD200u;
        // 0x2cd204: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd200) {
            ctx->pc = 0x2CD23Cu;
            goto label_2cd23c;
        }
    }
    ctx->pc = 0x2CD208u;
label_2cd208:
    // 0x2cd208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd20c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD20Cu;
    SET_GPR_U32(ctx, 31, 0x2CD214u);
    ctx->pc = 0x2CD210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD20Cu;
    // 0x2cd210: 0x24a5e6b0  addiu       $a1, $a1, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD20Cu, 0x2CD214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD214u;
label_2cd214:
    // 0x2cd214: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD214u;
    {
        const bool branch_taken_0x2cd214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD214u;
        // 0x2cd218: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd214) {
            ctx->pc = 0x2CD238u;
            goto label_2cd238;
        }
    }
    ctx->pc = 0x2CD21Cu;
    // 0x2cd21c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd220: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD220u;
    {
        const bool branch_taken_0x2cd220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD220u;
        // 0x2cd224: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd220) {
            ctx->pc = 0x2CD238u;
            goto label_2cd238;
        }
    }
    ctx->pc = 0x2CD228u;
    // 0x2cd228: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd22c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd230: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd234: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cd238:
    // 0x2cd238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cd23c:
    // 0x2cd23c: 0x24a5e938  addiu       $a1, $a1, -0x16C8
    ctx->pc = 0x2cd23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961464));
    // 0x2cd240: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD240u;
    SET_GPR_U32(ctx, 31, 0x2CD248u);
    ctx->pc = 0x2CD244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD240u;
    // 0x2cd244: 0x3c1e0048  lui         $fp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD240u, 0x2CD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD248u;
label_2cd248:
    // 0x2cd248: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2cd248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2cd24c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2cd24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2cd250: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2cd250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cd254: 0x8ca5d580  lw          $a1, -0x2A80($a1)
    ctx->pc = 0x2cd254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294956416)));
    // 0x2cd258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd25c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2cd25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd260: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD260u;
    SET_GPR_U32(ctx, 31, 0x2CD268u);
    ctx->pc = 0x2CD264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD260u;
    // 0x2cd264: 0x27d5e770  addiu       $s5, $fp, -0x1890 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD260u, 0x2CD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD268u;
label_2cd268:
    // 0x2cd268: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2cd268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2cd26c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd270: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2cd270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2cd274: 0x248443d8  addiu       $a0, $a0, 0x43D8
    ctx->pc = 0x2cd274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    // 0x2cd278: 0x34a5007d  ori         $a1, $a1, 0x7D
    ctx->pc = 0x2cd278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)125);
    // 0x2cd27c: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x2cd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2cd280: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x2cd280u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x2cd284: 0x26f6e780  addiu       $s6, $s7, -0x1880
    ctx->pc = 0x2cd284u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961024));
    // 0x2cd288: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD288u;
    SET_GPR_U32(ctx, 31, 0x2CD290u);
    ctx->pc = 0x2CD28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD288u;
    // 0x2cd28c: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD288u, 0x2CD290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD290u;
label_2cd290:
    // 0x2cd290: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cd290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cd294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd298: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cd298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd29c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cd29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cd2a0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD2A0u;
    SET_GPR_U32(ctx, 31, 0x2CD2A8u);
    ctx->pc = 0x2CD2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2A0u;
    // 0x2cd2a4: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD2A0u, 0x2CD2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2A8u;
label_2cd2a8:
    // 0x2cd2a8: 0xc0b27a2  jal         func_2C9E88
    ctx->pc = 0x2CD2A8u;
    SET_GPR_U32(ctx, 31, 0x2CD2B0u);
    ctx->pc = 0x2CD2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2A8u;
    // 0x2cd2ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E88u, 0x2CD2A8u, 0x2CD2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2B0u;
label_2cd2b0:
    // 0x2cd2b0: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2cd2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2cd2b4: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cd2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cd2b8: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x2cd2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2cd2bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cd2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cd2c0: 0x2406008e  addiu       $a2, $zero, 0x8E
    ctx->pc = 0x2cd2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2cd2c4: 0x240700bb  addiu       $a3, $zero, 0xBB
    ctx->pc = 0x2cd2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x2cd2c8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD2C8u;
    SET_GPR_U32(ctx, 31, 0x2CD2D0u);
    ctx->pc = 0x2CD2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2C8u;
    // 0x2cd2cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD2C8u, 0x2CD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2D0u;
label_2cd2d0:
    // 0x2cd2d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cd2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cd2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd2dc: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cd2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cd2e0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD2E0u;
    SET_GPR_U32(ctx, 31, 0x2CD2E8u);
    ctx->pc = 0x2CD2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2E0u;
    // 0x2cd2e4: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD2E0u, 0x2CD2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2E8u;
label_2cd2e8:
    // 0x2cd2e8: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x2cd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x2cd2ec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2cd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cd2f0: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2CD2F0u;
    {
        const bool branch_taken_0x2cd2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2F0u;
        // 0x2cd2f4: 0x27c4e770  addiu       $a0, $fp, -0x1890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2f0) {
            ctx->pc = 0x2CD3E0u;
            goto label_2cd3e0;
        }
    }
    ctx->pc = 0x2CD2F8u;
    // 0x2cd2f8: 0x8e920090  lw          $s2, 0x90($s4)
    ctx->pc = 0x2cd2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x2cd2fc: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x2cd2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x2cd300: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cd300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd304: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cd304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd308: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cd308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd30c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cd30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cd310: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2cd310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2cd314: 0x361080ff  ori         $s0, $s0, 0x80FF
    ctx->pc = 0x2cd314u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)33023);
    // 0x2cd318: 0x3c1180ff  lui         $s1, 0x80FF
    ctx->pc = 0x2cd318u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33023 << 16));
    // 0x2cd31c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD31Cu;
    SET_GPR_U32(ctx, 31, 0x2CD324u);
    ctx->pc = 0x2CD320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD31Cu;
    // 0x2cd320: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD31Cu, 0x2CD324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD324u;
label_2cd324:
    // 0x2cd324: 0x2531026  xor         $v0, $s2, $s3
    ctx->pc = 0x2cd324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x2cd328: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x2cd328u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x2cd32c: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cd32cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cd330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cd330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd334: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x2cd334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x2cd338: 0x222280b  movn        $a1, $s1, $v0
    ctx->pc = 0x2cd338u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2cd33c: 0x240700da  addiu       $a3, $zero, 0xDA
    ctx->pc = 0x2cd33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x2cd340: 0x3508006d  ori         $t0, $t0, 0x6D
    ctx->pc = 0x2cd340u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)109);
    // 0x2cd344: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD344u;
    SET_GPR_U32(ctx, 31, 0x2CD34Cu);
    ctx->pc = 0x2CD348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD344u;
    // 0x2cd348: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD344u, 0x2CD34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD34Cu;
label_2cd34c:
    // 0x2cd34c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cd34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd354: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cd354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd358: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cd358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cd35c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD35Cu;
    SET_GPR_U32(ctx, 31, 0x2CD364u);
    ctx->pc = 0x2CD360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD35Cu;
    // 0x2cd360: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD35Cu, 0x2CD364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD364u;
label_2cd364:
    // 0x2cd364: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cd364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cd368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd36c: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cd36cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cd370: 0x232280b  movn        $a1, $s1, $s2
    ctx->pc = 0x2cd370u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2cd374: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x2cd374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x2cd378: 0x240700da  addiu       $a3, $zero, 0xDA
    ctx->pc = 0x2cd378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x2cd37c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD37Cu;
    SET_GPR_U32(ctx, 31, 0x2CD384u);
    ctx->pc = 0x2CD380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD37Cu;
    // 0x2cd380: 0x3508006e  ori         $t0, $t0, 0x6E (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)110);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD37Cu, 0x2CD384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD384u;
label_2cd384:
    // 0x2cd384: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x2cd384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x2cd388: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD388u;
    {
        const bool branch_taken_0x2cd388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2CD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD388u;
        // 0x2cd38c: 0x3c100003  lui         $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd388) {
            ctx->pc = 0x2CD3A0u;
            goto label_2cd3a0;
        }
    }
    ctx->pc = 0x2CD390u;
    // 0x2cd390: 0x24110136  addiu       $s1, $zero, 0x136
    ctx->pc = 0x2cd390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x2cd394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD394u;
    {
        const bool branch_taken_0x2cd394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD394u;
        // 0x2cd398: 0x3610006f  ori         $s0, $s0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd394) {
            ctx->pc = 0x2CD3A8u;
            goto label_2cd3a8;
        }
    }
    ctx->pc = 0x2CD39Cu;
    // 0x2cd39c: 0x0  nop
    ctx->pc = 0x2cd39cu;
    // NOP
label_2cd3a0:
    // 0x2cd3a0: 0x2411014a  addiu       $s1, $zero, 0x14A
    ctx->pc = 0x2cd3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2cd3a4: 0x36100070  ori         $s0, $s0, 0x70
    ctx->pc = 0x2cd3a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)112);
label_2cd3a8:
    // 0x2cd3a8: 0x27c4e770  addiu       $a0, $fp, -0x1890
    ctx->pc = 0x2cd3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961008));
    // 0x2cd3ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cd3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd3b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cd3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd3b4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cd3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cd3b8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD3B8u;
    SET_GPR_U32(ctx, 31, 0x2CD3C0u);
    ctx->pc = 0x2CD3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3B8u;
    // 0x2cd3bc: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD3B8u, 0x2CD3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3C0u;
label_2cd3c0:
    // 0x2cd3c0: 0x26e4e780  addiu       $a0, $s7, -0x1880
    ctx->pc = 0x2cd3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961024));
    // 0x2cd3c4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2cd3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2cd3c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cd3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3cc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2cd3ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3d0: 0x34a580ff  ori         $a1, $a1, 0x80FF
    ctx->pc = 0x2cd3d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33023);
    // 0x2cd3d4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD3D4u;
    SET_GPR_U32(ctx, 31, 0x2CD3DCu);
    ctx->pc = 0x2CD3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3D4u;
    // 0x2cd3d8: 0x240700da  addiu       $a3, $zero, 0xDA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD3D4u, 0x2CD3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3DCu;
label_2cd3dc:
    // 0x2cd3dc: 0x27c4e770  addiu       $a0, $fp, -0x1890
    ctx->pc = 0x2cd3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961008));
label_2cd3e0:
    // 0x2cd3e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cd3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd3e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cd3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd3e8: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cd3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cd3ec: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD3ECu;
    SET_GPR_U32(ctx, 31, 0x2CD3F4u);
    ctx->pc = 0x2CD3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3ECu;
    // 0x2cd3f0: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD3ECu, 0x2CD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3F4u;
label_2cd3f4:
    // 0x2cd3f4: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x2cd3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x2cd3f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2cd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cd3fc: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2CD3FCu;
    {
        const bool branch_taken_0x2cd3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3FCu;
        // 0x2cd400: 0x3c080003  lui         $t0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3fc) {
            ctx->pc = 0x2CD4B8u;
            goto label_2cd4b8;
        }
    }
    ctx->pc = 0x2CD404u;
    // 0x2cd404: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2cd404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2cd408: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x2cd408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2cd40c: 0x35080029  ori         $t0, $t0, 0x29
    ctx->pc = 0x2cd40cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)41);
    // 0x2cd410: 0x26e4e780  addiu       $a0, $s7, -0x1880
    ctx->pc = 0x2cd410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961024));
    // 0x2cd414: 0x34a560ff  ori         $a1, $a1, 0x60FF
    ctx->pc = 0x2cd414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24831);
    // 0x2cd418: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2cd418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2cd41c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD41Cu;
    SET_GPR_U32(ctx, 31, 0x2CD424u);
    ctx->pc = 0x2CD420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD41Cu;
    // 0x2cd420: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD41Cu, 0x2CD424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD424u;
label_2cd424:
    // 0x2cd424: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cd424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cd428: 0x261043d0  addiu       $s0, $s0, 0x43D0
    ctx->pc = 0x2cd428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17360));
    // 0x2cd42c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cd42cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cd430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd434: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cd434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cd438: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD438u;
    SET_GPR_U32(ctx, 31, 0x2CD440u);
    ctx->pc = 0x2CD43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD438u;
    // 0x2cd43c: 0x34c6007e  ori         $a2, $a2, 0x7E (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)126);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD438u, 0x2CD440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD440u;
label_2cd440:
    // 0x2cd440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd444: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cd444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cd448: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cd448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cd44c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cd44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cd450: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD450u;
    SET_GPR_U32(ctx, 31, 0x2CD458u);
    ctx->pc = 0x2CD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD450u;
    // 0x2cd454: 0x34c6002f  ori         $a2, $a2, 0x2F (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD450u, 0x2CD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD458u;
label_2cd458:
    // 0x2cd458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd45c: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cd45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cd460: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cd460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cd464: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cd464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cd468: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD468u;
    SET_GPR_U32(ctx, 31, 0x2CD470u);
    ctx->pc = 0x2CD46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD468u;
    // 0x2cd46c: 0x34c60030  ori         $a2, $a2, 0x30 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD468u, 0x2CD470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD470u;
label_2cd470:
    // 0x2cd470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd474: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cd474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cd478: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cd478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cd47c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cd47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd480: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cd480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cd484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cd484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cd488: 0x34c60071  ori         $a2, $a2, 0x71
    ctx->pc = 0x2cd488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)113);
    // 0x2cd48c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cd48cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd490: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cd490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cd494: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cd494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd498: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cd498u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cd49c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cd49cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd4a0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2cd4a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cd4a4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2cd4a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd4a8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2cd4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cd4ac: 0x80b640e  j           func_2D9038
    ctx->pc = 0x2CD4ACu;
    ctx->pc = 0x2CD4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4ACu;
    // 0x2cd4b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    sub_002D9038_0x2d9038(rdram, ctx, runtime); return;
    ctx->pc = 0x2CD4B4u;
    // 0x2cd4b4: 0x0  nop
    ctx->pc = 0x2cd4b4u;
    // NOP
label_2cd4b8:
    // 0x2cd4b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2cd4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2cd4bc: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x2cd4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2cd4c0: 0x35080031  ori         $t0, $t0, 0x31
    ctx->pc = 0x2cd4c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)49);
    // 0x2cd4c4: 0x26e4e780  addiu       $a0, $s7, -0x1880
    ctx->pc = 0x2cd4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961024));
    // 0x2cd4c8: 0x34a560ff  ori         $a1, $a1, 0x60FF
    ctx->pc = 0x2cd4c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24831);
    // 0x2cd4cc: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2cd4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2cd4d0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD4D0u;
    SET_GPR_U32(ctx, 31, 0x2CD4D8u);
    ctx->pc = 0x2CD4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4D0u;
    // 0x2cd4d4: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD4D0u, 0x2CD4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4D8u;
label_2cd4d8:
    // 0x2cd4d8: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cd4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cd4dc: 0x261043d0  addiu       $s0, $s0, 0x43D0
    ctx->pc = 0x2cd4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17360));
    // 0x2cd4e0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cd4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cd4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4e8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD4E8u;
    SET_GPR_U32(ctx, 31, 0x2CD4F0u);
    ctx->pc = 0x2CD4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4E8u;
    // 0x2cd4ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD4E8u, 0x2CD4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4F0u;
label_2cd4f0:
    // 0x2cd4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4f4: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cd4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cd4f8: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cd4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cd4fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cd4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cd500: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CD500u;
    SET_GPR_U32(ctx, 31, 0x2CD508u);
    ctx->pc = 0x2CD504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD500u;
    // 0x2cd504: 0x34c60037  ori         $a2, $a2, 0x37 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CD500u, 0x2CD508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD508u;
label_2cd508:
    // 0x2cd508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cd508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd50c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cd50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cd510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cd510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd514: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cd514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cd518: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cd518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd51c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cd51cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cd520: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cd520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd524: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2cd524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cd528: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2cd528u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd52c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2cd52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cd530: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD530u;
        // 0x2cd534: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD538u;
}
