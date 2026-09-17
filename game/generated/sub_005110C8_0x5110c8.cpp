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

// Function: sub_005110C8
// Address: 0x5110c8 - 0x511300
void sub_005110C8_0x5110c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005110C8_0x5110c8");
#endif

    switch (ctx->pc) {
        case 0x511114u: goto label_511114;
        case 0x51111cu: goto label_51111c;
        case 0x51113cu: goto label_51113c;
        case 0x511174u: goto label_511174;
        case 0x511178u: goto label_511178;
        case 0x5111b4u: goto label_5111b4;
        case 0x5111ccu: goto label_5111cc;
        case 0x5111e4u: goto label_5111e4;
        case 0x5111fcu: goto label_5111fc;
        case 0x511210u: goto label_511210;
        case 0x511224u: goto label_511224;
        case 0x51123cu: goto label_51123c;
        case 0x511254u: goto label_511254;
        case 0x51126cu: goto label_51126c;
        case 0x511284u: goto label_511284;
        default: break;
    }

    ctx->pc = 0x5110c8u;

    // 0x5110c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5110c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x5110cc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x5110ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x5110d0: 0x4ac03  sra         $s5, $a0, 16
    ctx->pc = 0x5110d0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 4), 16));
    // 0x5110d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x5110d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x5110d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x5110d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x5110dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x5110dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x5110e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x5110e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x5110e4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x5110e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x5110e8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x5110e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x5110ec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x5110ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x5110f0: 0x15a080  sll         $s4, $s5, 2
    ctx->pc = 0x5110f0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x5110f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5110f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5110f8: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x5110f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x5110fc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x5110fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x511100: 0x8c423140  lw          $v0, 0x3140($v0)
    ctx->pc = 0x511100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12608)));
    // 0x511104: 0x14430074  bne         $v0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x511104u;
    {
        const bool branch_taken_0x511104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x511108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511104u;
        // 0x511108: 0x3c160090  lui         $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511104) {
            ctx->pc = 0x5112D8u;
            goto label_5112d8;
        }
    }
    ctx->pc = 0x51110Cu;
    // 0x51110c: 0xc143140  jal         func_50C500
    ctx->pc = 0x51110Cu;
    SET_GPR_U32(ctx, 31, 0x511114u);
    ctx->pc = 0x511110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51110Cu;
    // 0x511110: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50C500u, 0x51110Cu, 0x511114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511114u;
label_511114:
    // 0x511114: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x511114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x511118: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x511118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51111c:
    // 0x51111c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x51111cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x511120: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x511120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511124: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x511124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x511128: 0x460006b  bltz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x511128u;
    {
        const bool branch_taken_0x511128 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x51112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511128u;
        // 0x51112c: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511128) {
            ctx->pc = 0x5112D8u;
            goto label_5112d8;
        }
    }
    ctx->pc = 0x511130u;
    // 0x511130: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x511130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511134: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x511134u;
    SET_GPR_U32(ctx, 31, 0x51113Cu);
    ctx->pc = 0x511138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511134u;
    // 0x511138: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x511134u, 0x51113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51113Cu;
label_51113c:
    // 0x51113c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51113cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511140: 0x12000065  beqz        $s0, . + 4 + (0x65 << 2)
    ctx->pc = 0x511140u;
    {
        const bool branch_taken_0x511140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x511144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511140u;
        // 0x511144: 0x26c2f080  addiu       $v0, $s6, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511140) {
            ctx->pc = 0x5112D8u;
            goto label_5112d8;
        }
    }
    ctx->pc = 0x511148u;
    // 0x511148: 0xa615000a  sh          $s5, 0xA($s0)
    ctx->pc = 0x511148u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 21));
    // 0x51114c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x51114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x511150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x511150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511154: 0xac5040c0  sw          $s0, 0x40C0($v0)
    ctx->pc = 0x511154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16576), GPR_U32(ctx, 16));
    // 0x511158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x511158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51115c: 0xae120040  sw          $s2, 0x40($s0)
    ctx->pc = 0x51115cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
    // 0x511160: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x511160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511164: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x511164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x511168: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x511168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51116c: 0xc1443be  jal         func_510EF8
    ctx->pc = 0x51116Cu;
    SET_GPR_U32(ctx, 31, 0x511174u);
    ctx->pc = 0x511170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51116Cu;
    // 0x511170: 0xa611000c  sh          $s1, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510EF8u, 0x51116Cu, 0x511174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511174u;
label_511174:
    // 0x511174: 0x0  nop
    ctx->pc = 0x511174u;
    // NOP
label_511178:
    // 0x511178: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x511178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x51117c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x51117Cu;
    {
        const bool branch_taken_0x51117c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x511180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51117Cu;
        // 0x511180: 0x2e42000a  sltiu       $v0, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x51117c) {
            ctx->pc = 0x511284u;
            goto label_511284;
        }
    }
    ctx->pc = 0x511184u;
    // 0x511184: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x511184u;
    {
        const bool branch_taken_0x511184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x511188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511184u;
        // 0x511188: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511184) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x51118Cu;
    // 0x51118c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x51118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x511190: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x511190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x511194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x511194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x511198: 0x8c63d450  lw          $v1, -0x2BB0($v1)
    ctx->pc = 0x511198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956112)));
    // 0x51119c: 0x600008  jr          $v1
    ctx->pc = 0x51119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x5111A8u: goto label_5111a8;
            case 0x5111C0u: goto label_5111c0;
            case 0x5111D8u: goto label_5111d8;
            case 0x5111F0u: goto label_5111f0;
            case 0x511208u: goto label_511208;
            case 0x511218u: goto label_511218;
            case 0x511230u: goto label_511230;
            case 0x511248u: goto label_511248;
            case 0x511260u: goto label_511260;
            case 0x511278u: goto label_511278;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51119Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5111A4u;
    // 0x5111a4: 0x0  nop
    ctx->pc = 0x5111a4u;
    // NOP
label_5111a8:
    // 0x5111a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5111a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5111ac: 0xc1443ca  jal         func_510F28
    ctx->pc = 0x5111ACu;
    SET_GPR_U32(ctx, 31, 0x5111B4u);
    ctx->pc = 0x5111B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5111ACu;
    // 0x5111b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510F28u, 0x5111ACu, 0x5111B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5111B4u;
label_5111b4:
    // 0x5111b4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x5111B4u;
    {
        const bool branch_taken_0x5111b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5111B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5111B4u;
        // 0x5111b8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5111b4) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x5111BCu;
    // 0x5111bc: 0x0  nop
    ctx->pc = 0x5111bcu;
    // NOP
label_5111c0:
    // 0x5111c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5111c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5111c4: 0xc1443e4  jal         func_510F90
    ctx->pc = 0x5111C4u;
    SET_GPR_U32(ctx, 31, 0x5111CCu);
    ctx->pc = 0x5111C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5111C4u;
    // 0x5111c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510F90u, 0x5111C4u, 0x5111CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5111CCu;
label_5111cc:
    // 0x5111cc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x5111CCu;
    {
        const bool branch_taken_0x5111cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5111D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5111CCu;
        // 0x5111d0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5111cc) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x5111D4u;
    // 0x5111d4: 0x0  nop
    ctx->pc = 0x5111d4u;
    // NOP
label_5111d8:
    // 0x5111d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5111d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5111dc: 0xc1443dc  jal         func_510F70
    ctx->pc = 0x5111DCu;
    SET_GPR_U32(ctx, 31, 0x5111E4u);
    ctx->pc = 0x5111E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5111DCu;
    // 0x5111e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510F70u, 0x5111DCu, 0x5111E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5111E4u;
label_5111e4:
    // 0x5111e4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x5111E4u;
    {
        const bool branch_taken_0x5111e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5111E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5111E4u;
        // 0x5111e8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5111e4) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x5111ECu;
    // 0x5111ec: 0x0  nop
    ctx->pc = 0x5111ecu;
    // NOP
label_5111f0:
    // 0x5111f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5111f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5111f4: 0xc1443d0  jal         func_510F40
    ctx->pc = 0x5111F4u;
    SET_GPR_U32(ctx, 31, 0x5111FCu);
    ctx->pc = 0x5111F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5111F4u;
    // 0x5111f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510F40u, 0x5111F4u, 0x5111FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5111FCu;
label_5111fc:
    // 0x5111fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x5111FCu;
    {
        const bool branch_taken_0x5111fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5111FCu;
        // 0x511200: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5111fc) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x511204u;
    // 0x511204: 0x0  nop
    ctx->pc = 0x511204u;
    // NOP
label_511208:
    // 0x511208: 0xc1443ea  jal         func_510FA8
    ctx->pc = 0x511208u;
    SET_GPR_U32(ctx, 31, 0x511210u);
    ctx->pc = 0x51120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511208u;
    // 0x51120c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510FA8u, 0x511208u, 0x511210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511210u;
label_511210:
    // 0x511210: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x511210u;
    {
        const bool branch_taken_0x511210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511210u;
        // 0x511214: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511210) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x511218u;
label_511218:
    // 0x511218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x511218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51121c: 0xc1443f6  jal         func_510FD8
    ctx->pc = 0x51121Cu;
    SET_GPR_U32(ctx, 31, 0x511224u);
    ctx->pc = 0x511220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51121Cu;
    // 0x511220: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510FD8u, 0x51121Cu, 0x511224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511224u;
label_511224:
    // 0x511224: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x511224u;
    {
        const bool branch_taken_0x511224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511224u;
        // 0x511228: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511224) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x51122Cu;
    // 0x51122c: 0x0  nop
    ctx->pc = 0x51122cu;
    // NOP
label_511230:
    // 0x511230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x511230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511234: 0xc1443fe  jal         func_510FF8
    ctx->pc = 0x511234u;
    SET_GPR_U32(ctx, 31, 0x51123Cu);
    ctx->pc = 0x511238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511234u;
    // 0x511238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510FF8u, 0x511234u, 0x51123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51123Cu;
label_51123c:
    // 0x51123c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x51123Cu;
    {
        const bool branch_taken_0x51123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51123Cu;
        // 0x511240: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51123c) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x511244u;
    // 0x511244: 0x0  nop
    ctx->pc = 0x511244u;
    // NOP
label_511248:
    // 0x511248: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x511248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51124c: 0xc14440e  jal         func_511038
    ctx->pc = 0x51124Cu;
    SET_GPR_U32(ctx, 31, 0x511254u);
    ctx->pc = 0x511250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51124Cu;
    // 0x511250: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511038u, 0x51124Cu, 0x511254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511254u;
label_511254:
    // 0x511254: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x511254u;
    {
        const bool branch_taken_0x511254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511254u;
        // 0x511258: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511254) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x51125Cu;
    // 0x51125c: 0x0  nop
    ctx->pc = 0x51125cu;
    // NOP
label_511260:
    // 0x511260: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x511260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511264: 0xc14441e  jal         func_511078
    ctx->pc = 0x511264u;
    SET_GPR_U32(ctx, 31, 0x51126Cu);
    ctx->pc = 0x511268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511264u;
    // 0x511268: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511078u, 0x511264u, 0x51126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51126Cu;
label_51126c:
    // 0x51126c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x51126Cu;
    {
        const bool branch_taken_0x51126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51126Cu;
        // 0x511270: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51126c) {
            ctx->pc = 0x511288u;
            goto label_511288;
        }
    }
    ctx->pc = 0x511274u;
    // 0x511274: 0x0  nop
    ctx->pc = 0x511274u;
    // NOP
label_511278:
    // 0x511278: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x511278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51127c: 0xc144428  jal         func_5110A0
    ctx->pc = 0x51127Cu;
    SET_GPR_U32(ctx, 31, 0x511284u);
    ctx->pc = 0x511280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51127Cu;
    // 0x511280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5110A0u, 0x51127Cu, 0x511284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511284u;
label_511284:
    // 0x511284: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x511284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_511288:
    // 0x511288: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x511288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x51128c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x51128cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511290: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x511290u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x511294: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x511294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x511298: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x511298u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    // 0x51129c: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x51129Cu;
    {
        const bool branch_taken_0x51129c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5112A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51129Cu;
        // 0x5112a0: 0x32317fff  andi        $s1, $s1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x51129c) {
            ctx->pc = 0x511178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_511178;
        }
    }
    ctx->pc = 0x5112A4u;
    // 0x5112a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x5112a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5112a8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x5112a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5112ac: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x5112acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x5112b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x5112b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5112b4: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x5112b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x5112b8: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x5112b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x5112bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x5112bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x5112c0: 0x84910000  lh          $s1, 0x0($a0)
    ctx->pc = 0x5112c0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5112c4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x5112c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x5112c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5112c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5112cc: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x5112ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x5112d0: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x5112D0u;
    {
        const bool branch_taken_0x5112d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5112D0u;
        // 0x5112d4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5112d0) {
            ctx->pc = 0x51111Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_51111c;
        }
    }
    ctx->pc = 0x5112D8u;
label_5112d8:
    // 0x5112d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x5112d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5112dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x5112dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5112e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x5112e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5112e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5112e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5112e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x5112e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5112ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x5112ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5112f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x5112f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5112f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x5112f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5112f8: 0x3e00008  jr          $ra
    ctx->pc = 0x5112F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5112FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5112F8u;
        // 0x5112fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5112F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511300u;
}
