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

// Function: sub_00324768
// Address: 0x324768 - 0x324848
void sub_00324768_0x324768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324768_0x324768");
#endif

    switch (ctx->pc) {
        case 0x324768u: goto label_324768;
        case 0x32476cu: goto label_32476c;
        case 0x324770u: goto label_324770;
        case 0x324774u: goto label_324774;
        case 0x324778u: goto label_324778;
        case 0x32477cu: goto label_32477c;
        case 0x324780u: goto label_324780;
        case 0x324784u: goto label_324784;
        case 0x324788u: goto label_324788;
        case 0x32478cu: goto label_32478c;
        case 0x324790u: goto label_324790;
        case 0x324794u: goto label_324794;
        case 0x324798u: goto label_324798;
        case 0x32479cu: goto label_32479c;
        case 0x3247a0u: goto label_3247a0;
        case 0x3247a4u: goto label_3247a4;
        case 0x3247a8u: goto label_3247a8;
        case 0x3247acu: goto label_3247ac;
        case 0x3247b0u: goto label_3247b0;
        case 0x3247b4u: goto label_3247b4;
        case 0x3247b8u: goto label_3247b8;
        case 0x3247bcu: goto label_3247bc;
        case 0x3247c0u: goto label_3247c0;
        case 0x3247c4u: goto label_3247c4;
        case 0x3247c8u: goto label_3247c8;
        case 0x3247ccu: goto label_3247cc;
        case 0x3247d0u: goto label_3247d0;
        case 0x3247d4u: goto label_3247d4;
        case 0x3247d8u: goto label_3247d8;
        case 0x3247dcu: goto label_3247dc;
        case 0x3247e0u: goto label_3247e0;
        case 0x3247e4u: goto label_3247e4;
        case 0x3247e8u: goto label_3247e8;
        case 0x3247ecu: goto label_3247ec;
        case 0x3247f0u: goto label_3247f0;
        case 0x3247f4u: goto label_3247f4;
        case 0x3247f8u: goto label_3247f8;
        case 0x3247fcu: goto label_3247fc;
        case 0x324800u: goto label_324800;
        case 0x324804u: goto label_324804;
        case 0x324808u: goto label_324808;
        case 0x32480cu: goto label_32480c;
        case 0x324810u: goto label_324810;
        case 0x324814u: goto label_324814;
        case 0x324818u: goto label_324818;
        case 0x32481cu: goto label_32481c;
        case 0x324820u: goto label_324820;
        case 0x324824u: goto label_324824;
        case 0x324828u: goto label_324828;
        case 0x32482cu: goto label_32482c;
        case 0x324830u: goto label_324830;
        case 0x324834u: goto label_324834;
        case 0x324838u: goto label_324838;
        case 0x32483cu: goto label_32483c;
        case 0x324840u: goto label_324840;
        case 0x324844u: goto label_324844;
        default: break;
    }

    ctx->pc = 0x324768u;

label_324768:
    // 0x324768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32476c:
    // 0x32476c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_324770:
    // 0x324770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x324770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_324774:
    // 0x324774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_324778:
    // 0x324778: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x324778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32477c:
    // 0x32477c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_324780:
    // 0x324780: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x324780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_324784:
    // 0x324784: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x324784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_324788:
    // 0x324788: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_32478c:
    if (ctx->pc == 0x32478Cu) {
        ctx->pc = 0x32478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324788u;
        // 0x32478c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324790u;
        goto label_324790;
    }
    ctx->pc = 0x324788u;
    {
        const bool branch_taken_0x324788 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324788u;
        // 0x32478c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324788) {
            ctx->pc = 0x3247C0u;
            goto label_3247c0;
        }
    }
    ctx->pc = 0x324790u;
label_324790:
    // 0x324790: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x324790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_324794:
    // 0x324794: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x324794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_324798:
    // 0x324798: 0x308200c0  andi        $v0, $a0, 0xC0
    ctx->pc = 0x324798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
label_32479c:
    // 0x32479c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3247a0:
    if (ctx->pc == 0x3247A0u) {
        ctx->pc = 0x3247A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32479Cu;
        // 0x3247a0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3247A4u;
        goto label_3247a4;
    }
    ctx->pc = 0x32479Cu;
    {
        const bool branch_taken_0x32479c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32479c) {
            ctx->pc = 0x3247A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32479Cu;
            // 0x3247a0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3247B0u;
            goto label_3247b0;
        }
    }
    ctx->pc = 0x3247A4u;
label_3247a4:
    // 0x3247a4: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x3247a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_3247a8:
    // 0x3247a8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3247a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3247ac:
    // 0x3247ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3247acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3247b0:
    // 0x3247b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3247b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3247b4:
    // 0x3247b4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3247b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3247b8:
    // 0x3247b8: 0x40f809  jalr        $v0
label_3247bc:
    if (ctx->pc == 0x3247BCu) {
        ctx->pc = 0x3247BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247B8u;
        // 0x3247bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3247C0u;
        goto label_3247c0;
    }
    ctx->pc = 0x3247B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3247C0u);
        ctx->pc = 0x3247BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247B8u;
        // 0x3247bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3247B8u, 0x3247C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3247C0u;
label_3247c0:
    // 0x3247c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3247c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3247c4:
    // 0x3247c4: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x3247c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
label_3247c8:
    // 0x3247c8: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x3247c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3247cc:
    // 0x3247cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3247ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3247d0:
    // 0x3247d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3247d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3247d4:
    // 0x3247d4: 0xc0cb628  jal         func_32D8A0
label_3247d8:
    if (ctx->pc == 0x3247D8u) {
        ctx->pc = 0x3247D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247D4u;
        // 0x3247d8: 0x2684f940  addiu       $a0, $s4, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3247DCu;
        goto label_3247dc;
    }
    ctx->pc = 0x3247D4u;
    SET_GPR_U32(ctx, 31, 0x3247DCu);
    ctx->pc = 0x3247D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3247D4u;
    // 0x3247d8: 0x2684f940  addiu       $a0, $s4, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x3247D4u, 0x3247DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3247DCu;
label_3247dc:
    // 0x3247dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3247dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3247e0:
    // 0x3247e0: 0x8cc200e0  lw          $v0, 0xE0($a2)
    ctx->pc = 0x3247e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
label_3247e4:
    // 0x3247e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3247e8:
    if (ctx->pc == 0x3247E8u) {
        ctx->pc = 0x3247E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247E4u;
        // 0x3247e8: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3247ECu;
        goto label_3247ec;
    }
    ctx->pc = 0x3247E4u;
    {
        const bool branch_taken_0x3247e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3247E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247E4u;
        // 0x3247e8: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247e4) {
            ctx->pc = 0x324820u;
            goto label_324820;
        }
    }
    ctx->pc = 0x3247ECu;
label_3247ec:
    // 0x3247ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3247ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3247f0:
    // 0x3247f0: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x3247f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3247f4:
    // 0x3247f4: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x3247f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_3247f8:
    // 0x3247f8: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
label_3247fc:
    if (ctx->pc == 0x3247FCu) {
        ctx->pc = 0x3247FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247F8u;
        // 0x3247fc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324800u;
        goto label_324800;
    }
    ctx->pc = 0x3247F8u;
    {
        const bool branch_taken_0x3247f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x3247f8) {
            ctx->pc = 0x3247FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3247F8u;
            // 0x3247fc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324800u;
            goto label_324800;
        }
    }
    ctx->pc = 0x324800u;
label_324800:
    // 0x324800: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x324800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_324804:
    // 0x324804: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x324804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_324808:
    // 0x324808: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_32480c:
    if (ctx->pc == 0x32480Cu) {
        ctx->pc = 0x32480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324808u;
        // 0x32480c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324810u;
        goto label_324810;
    }
    ctx->pc = 0x324808u;
    {
        const bool branch_taken_0x324808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324808) {
            ctx->pc = 0x32480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324808u;
            // 0x32480c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x324820u;
            goto label_324820;
        }
    }
    ctx->pc = 0x324810u;
label_324810:
    // 0x324810: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_324814:
    // 0x324814: 0x40f809  jalr        $v0
label_324818:
    if (ctx->pc == 0x324818u) {
        ctx->pc = 0x324818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324814u;
        // 0x324818: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32481Cu;
        goto label_32481c;
    }
    ctx->pc = 0x324814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32481Cu);
        ctx->pc = 0x324818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324814u;
        // 0x324818: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324814u, 0x32481Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32481Cu;
label_32481c:
    // 0x32481c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x32481cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_324820:
    // 0x324820: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_324824:
    if (ctx->pc == 0x324824u) {
        ctx->pc = 0x324824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324820u;
        // 0x324824: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324828u;
        goto label_324828;
    }
    ctx->pc = 0x324820u;
    {
        const bool branch_taken_0x324820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324820) {
            ctx->pc = 0x324824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324820u;
            // 0x324824: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3247D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3247d0;
        }
    }
    ctx->pc = 0x324828u;
label_324828:
    // 0x324828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32482c:
    // 0x32482c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32482cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_324830:
    // 0x324830: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_324834:
    // 0x324834: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x324834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_324838:
    // 0x324838: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x324838u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32483c:
    // 0x32483c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32483cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_324840:
    // 0x324840: 0x3e00008  jr          $ra
label_324844:
    if (ctx->pc == 0x324844u) {
        ctx->pc = 0x324844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324840u;
        // 0x324844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324848u;
        goto label_fallthrough_0x324840;
    }
    ctx->pc = 0x324840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324840u;
        // 0x324844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x324840:
    ctx->pc = 0x324848u;
}
