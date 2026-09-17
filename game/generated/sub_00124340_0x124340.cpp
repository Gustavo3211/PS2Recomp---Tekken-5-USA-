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

// Function: sub_00124340
// Address: 0x124340 - 0x1244a8
void sub_00124340_0x124340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124340_0x124340");
#endif

    switch (ctx->pc) {
        case 0x124388u: goto label_124388;
        case 0x124390u: goto label_124390;
        case 0x1243b0u: goto label_1243b0;
        case 0x1243c8u: goto label_1243c8;
        case 0x1243e8u: goto label_1243e8;
        case 0x124430u: goto label_124430;
        case 0x124444u: goto label_124444;
        case 0x12446cu: goto label_12446c;
        case 0x124478u: goto label_124478;
        default: break;
    }

    ctx->pc = 0x124340u;

    // 0x124340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124344: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x124344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x124348: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12434c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12434cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x124350: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x124350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x124354: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x124354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x124358: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x124358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12435c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12435Cu;
    {
        const bool branch_taken_0x12435c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12435c) {
            ctx->pc = 0x124360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12435Cu;
            // 0x124360: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124370u;
            goto label_124370;
        }
    }
    ctx->pc = 0x124364u;
    // 0x124364: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x124364u;
    {
        const bool branch_taken_0x124364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124364u;
        // 0x124368: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124364) {
            ctx->pc = 0x1243B4u;
            goto label_1243b4;
        }
    }
    ctx->pc = 0x12436Cu;
    // 0x12436c: 0x0  nop
    ctx->pc = 0x12436cu;
    // NOP
label_124370:
    // 0x124370: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x124370u;
    {
        const bool branch_taken_0x124370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124370u;
        // 0x124374: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124370) {
            ctx->pc = 0x1243A8u;
            goto label_1243a8;
        }
    }
    ctx->pc = 0x124378u;
    // 0x124378: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x124378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12437c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x12437Cu;
    {
        const bool branch_taken_0x12437c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12437Cu;
        // 0x124380: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12437c) {
            ctx->pc = 0x1243B4u;
            goto label_1243b4;
        }
    }
    ctx->pc = 0x124384u;
    // 0x124384: 0x0  nop
    ctx->pc = 0x124384u;
    // NOP
label_124388:
    // 0x124388: 0xc049086  jal         func_124218
    ctx->pc = 0x124388u;
    SET_GPR_U32(ctx, 31, 0x124390u);
    ctx->pc = 0x12438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124388u;
    // 0x12438c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124218u, 0x124388u, 0x124390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124390u;
label_124390:
    // 0x124390: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x124390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124394: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x124394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x124398: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x124398u;
    {
        const bool branch_taken_0x124398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124398u;
        // 0x12439c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124398) {
            ctx->pc = 0x124388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124388;
        }
    }
    ctx->pc = 0x1243A0u;
    // 0x1243a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1243A0u;
    {
        const bool branch_taken_0x1243a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243A0u;
        // 0x1243a4: 0xae510010  sw          $s1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243a0) {
            ctx->pc = 0x1243B8u;
            goto label_1243b8;
        }
    }
    ctx->pc = 0x1243A8u;
label_1243a8:
    // 0x1243a8: 0xc049086  jal         func_124218
    ctx->pc = 0x1243A8u;
    SET_GPR_U32(ctx, 31, 0x1243B0u);
    ctx->pc = 0x1243ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243A8u;
    // 0x1243ac: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124218u, 0x1243A8u, 0x1243B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243B0u;
label_1243b0:
    // 0x1243b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1243b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1243b4:
    // 0x1243b4: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1243b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_1243b8:
    // 0x1243b8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1243B8u;
    {
        const bool branch_taken_0x1243b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243B8u;
        // 0x1243bc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243b8) {
            ctx->pc = 0x1243D0u;
            goto label_1243d0;
        }
    }
    ctx->pc = 0x1243C0u;
    // 0x1243c0: 0xc049e78  jal         func_1279E0
    ctx->pc = 0x1243C0u;
    SET_GPR_U32(ctx, 31, 0x1243C8u);
    ctx->pc = 0x1243C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243C0u;
    // 0x1243c4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x1243C0u, 0x1243C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243C8u;
label_1243c8:
    // 0x1243c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1243C8u;
    {
        const bool branch_taken_0x1243c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243C8u;
        // 0x1243cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243c8) {
            ctx->pc = 0x1243D8u;
            goto label_1243d8;
        }
    }
    ctx->pc = 0x1243D0u;
label_1243d0:
    // 0x1243d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1243d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1243d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1243d8:
    // 0x1243d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1243D8u;
    {
        const bool branch_taken_0x1243d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243D8u;
        // 0x1243dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243d8) {
            ctx->pc = 0x1243ECu;
            goto label_1243ec;
        }
    }
    ctx->pc = 0x1243E0u;
    // 0x1243e0: 0xc049e78  jal         func_1279E0
    ctx->pc = 0x1243E0u;
    SET_GPR_U32(ctx, 31, 0x1243E8u);
    ctx->pc = 0x1243E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243E0u;
    // 0x1243e4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x1243E0u, 0x1243E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243E8u;
label_1243e8:
    // 0x1243e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1243e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1243ec:
    // 0x1243ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1243ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1243f0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1243f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1243f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1243f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1243f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1243F8u;
    {
        const bool branch_taken_0x1243f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1243FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243F8u;
        // 0x1243fc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243f8) {
            ctx->pc = 0x12440Cu;
            goto label_12440c;
        }
    }
    ctx->pc = 0x124400u;
    // 0x124400: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x124400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x124404: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x124404u;
    {
        const bool branch_taken_0x124404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124404) {
            ctx->pc = 0x124408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124404u;
            // 0x124408: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124494u;
            goto label_124494;
        }
    }
    ctx->pc = 0x12440Cu;
label_12440c:
    // 0x12440c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x12440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x124410: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124414: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x124414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x124418: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x124418u;
    {
        const bool branch_taken_0x124418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124418u;
        // 0x12441c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124418) {
            ctx->pc = 0x124458u;
            goto label_124458;
        }
    }
    ctx->pc = 0x124420u;
    // 0x124420: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x124420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124424: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x124424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124428: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x124428u;
    {
        const bool branch_taken_0x124428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124428u;
        // 0x12442c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124428) {
            ctx->pc = 0x124470u;
            goto label_124470;
        }
    }
    ctx->pc = 0x124430u;
label_124430:
    // 0x124430: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124434: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x124434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x124438: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x124438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x12443c: 0xc049096  jal         func_124258
    ctx->pc = 0x12443Cu;
    SET_GPR_U32(ctx, 31, 0x124444u);
    ctx->pc = 0x124440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12443Cu;
    // 0x124440: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124258u, 0x12443Cu, 0x124444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124444u;
label_124444:
    // 0x124444: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x124444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124448: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x124448u;
    {
        const bool branch_taken_0x124448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124448u;
        // 0x12444c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124448) {
            ctx->pc = 0x124430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124430;
        }
    }
    ctx->pc = 0x124450u;
    // 0x124450: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x124450u;
    {
        const bool branch_taken_0x124450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124450u;
        // 0x124454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124450) {
            ctx->pc = 0x124470u;
            goto label_124470;
        }
    }
    ctx->pc = 0x124458u;
label_124458:
    // 0x124458: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x124458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12445c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12445cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124460: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x124460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x124464: 0xc049096  jal         func_124258
    ctx->pc = 0x124464u;
    SET_GPR_U32(ctx, 31, 0x12446Cu);
    ctx->pc = 0x124468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124464u;
    // 0x124468: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124258u, 0x124464u, 0x12446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12446Cu;
label_12446c:
    // 0x12446c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12446cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124470:
    // 0x124470: 0xc048ea4  jal         func_123A90
    ctx->pc = 0x124470u;
    SET_GPR_U32(ctx, 31, 0x124478u);
    ctx->pc = 0x124474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124470u;
    // 0x124474: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A90u, 0x124470u, 0x124478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124478u;
label_124478:
    // 0x124478: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124478u;
    {
        const bool branch_taken_0x124478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124478) {
            ctx->pc = 0x12447Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124478u;
            // 0x12447c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124480u;
            goto label_124480;
        }
    }
    ctx->pc = 0x124480u;
label_124480:
    // 0x124480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x124480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124484: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x124484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x124488: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x124488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x12448c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x12448cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x124490: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x124490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_124494:
    // 0x124494: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x124494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124498: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x124498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12449c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x12449cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1244a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1244A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1244A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244A0u;
        // 0x1244a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1244A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1244A8u;
}
