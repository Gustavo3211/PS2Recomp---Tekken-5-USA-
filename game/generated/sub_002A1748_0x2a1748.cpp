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

// Function: sub_002A1748
// Address: 0x2a1748 - 0x2a19c8
void sub_002A1748_0x2a1748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1748_0x2a1748");
#endif

    switch (ctx->pc) {
        case 0x2a17b4u: goto label_2a17b4;
        case 0x2a17dcu: goto label_2a17dc;
        case 0x2a1804u: goto label_2a1804;
        case 0x2a182cu: goto label_2a182c;
        case 0x2a1858u: goto label_2a1858;
        case 0x2a188cu: goto label_2a188c;
        case 0x2a18a8u: goto label_2a18a8;
        case 0x2a18c0u: goto label_2a18c0;
        case 0x2a18c8u: goto label_2a18c8;
        case 0x2a18ecu: goto label_2a18ec;
        case 0x2a1954u: goto label_2a1954;
        case 0x2a198cu: goto label_2a198c;
        default: break;
    }

    ctx->pc = 0x2a1748u;

    // 0x2a1748: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a1748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a174c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a1750: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a1750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1758: 0x26640158  addiu       $a0, $s3, 0x158
    ctx->pc = 0x2a1758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 344));
    // 0x2a175c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a1760: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a1764: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a1764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a1768: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a1768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a176c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2a176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2a1770: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2a1770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2a1774: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2a1774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2a1778: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2a1778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2a177c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a1780: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1780u;
    {
        const bool branch_taken_0x2a1780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1780u;
        // 0x2a1784: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1780) {
            ctx->pc = 0x2A1798u;
            goto label_2a1798;
        }
    }
    ctx->pc = 0x2A1788u;
    // 0x2a1788: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a178c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a1790: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1790u;
    {
        const bool branch_taken_0x2a1790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1790u;
        // 0x2a1794: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1790) {
            ctx->pc = 0x2A17A8u;
            goto label_2a17a8;
        }
    }
    ctx->pc = 0x2A1798u;
label_2a1798:
    // 0x2a1798: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a1798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a179c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a179cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a17a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2a17a8:
    // 0x2a17a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a17a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17ac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A17ACu;
    SET_GPR_U32(ctx, 31, 0x2A17B4u);
    ctx->pc = 0x2A17B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17ACu;
    // 0x2a17b0: 0x2445ca60  addiu       $a1, $v0, -0x35A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A17ACu, 0x2A17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17B4u;
label_2a17b4:
    // 0x2a17b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a17b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A17B8u;
    {
        const bool branch_taken_0x2a17b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17B8u;
        // 0x2a17bc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17b8) {
            ctx->pc = 0x2A17CCu;
            goto label_2a17cc;
        }
    }
    ctx->pc = 0x2A17C0u;
    // 0x2a17c0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a17c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a17c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a17c8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a17cc:
    // 0x2a17cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a17ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a17d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a17d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17d4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A17D4u;
    SET_GPR_U32(ctx, 31, 0x2A17DCu);
    ctx->pc = 0x2A17D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17D4u;
    // 0x2a17d8: 0x24a5cf80  addiu       $a1, $a1, -0x3080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A17D4u, 0x2A17DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17DCu;
label_2a17dc:
    // 0x2a17dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a17dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A17E0u;
    {
        const bool branch_taken_0x2a17e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17E0u;
        // 0x2a17e4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17e0) {
            ctx->pc = 0x2A17F4u;
            goto label_2a17f4;
        }
    }
    ctx->pc = 0x2A17E8u;
    // 0x2a17e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a17ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a17ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a17f0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a17f4:
    // 0x2a17f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a17f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a17f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a17f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17fc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A17FCu;
    SET_GPR_U32(ctx, 31, 0x2A1804u);
    ctx->pc = 0x2A1800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17FCu;
    // 0x2a1800: 0x24a5cfa0  addiu       $a1, $a1, -0x3060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A17FCu, 0x2A1804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1804u;
label_2a1804:
    // 0x2a1804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1808: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1808u;
    {
        const bool branch_taken_0x2a1808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1808u;
        // 0x2a180c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1808) {
            ctx->pc = 0x2A181Cu;
            goto label_2a181c;
        }
    }
    ctx->pc = 0x2A1810u;
    // 0x2a1810: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a1810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a1814: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a1814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a1818: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a1818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a181c:
    // 0x2a181c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a181cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a1820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1824: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A1824u;
    SET_GPR_U32(ctx, 31, 0x2A182Cu);
    ctx->pc = 0x2A1828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1824u;
    // 0x2a1828: 0x24a5cf90  addiu       $a1, $a1, -0x3070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A1824u, 0x2A182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A182Cu;
label_2a182c:
    // 0x2a182c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1830: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1830u;
    {
        const bool branch_taken_0x2a1830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1830u;
        // 0x2a1834: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1830) {
            ctx->pc = 0x2A1844u;
            goto label_2a1844;
        }
    }
    ctx->pc = 0x2A1838u;
    // 0x2a1838: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a183c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a1840: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a1840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a1844:
    // 0x2a1844: 0xaec40100  sw          $a0, 0x100($s6)
    ctx->pc = 0x2a1844u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 256), GPR_U32(ctx, 4));
    // 0x2a1848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a184c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a184cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a1850: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A1850u;
    SET_GPR_U32(ctx, 31, 0x2A1858u);
    ctx->pc = 0x2A1854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1850u;
    // 0x2a1854: 0x24a5cfb0  addiu       $a1, $a1, -0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A1850u, 0x2A1858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1858u;
label_2a1858:
    // 0x2a1858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a185c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A185Cu;
    {
        const bool branch_taken_0x2a185c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A185Cu;
        // 0x2a1860: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a185c) {
            ctx->pc = 0x2A1870u;
            goto label_2a1870;
        }
    }
    ctx->pc = 0x2A1864u;
    // 0x2a1864: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a1864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a1868: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a1868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a186c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a186cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a1870:
    // 0x2a1870: 0xaec40104  sw          $a0, 0x104($s6)
    ctx->pc = 0x2a1870u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 260), GPR_U32(ctx, 4));
    // 0x2a1874: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1878: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a1878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a187c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a187cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1880: 0x24a5c958  addiu       $a1, $a1, -0x36A8
    ctx->pc = 0x2a1880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953304));
    // 0x2a1884: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A1884u;
    SET_GPR_U32(ctx, 31, 0x2A188Cu);
    ctx->pc = 0x2A1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1884u;
    // 0x2a1888: 0x26d50008  addiu       $s5, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A1884u, 0x2A188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A188Cu;
label_2a188c:
    // 0x2a188c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a188cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a1890: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x2a1890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a1894: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1898: 0x24a5c968  addiu       $a1, $a1, -0x3698
    ctx->pc = 0x2a1898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953320));
    // 0x2a189c: 0x241eefff  addiu       $fp, $zero, -0x1001
    ctx->pc = 0x2a189cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a18a0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A18A0u;
    SET_GPR_U32(ctx, 31, 0x2A18A8u);
    ctx->pc = 0x2A18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18A0u;
    // 0x2a18a4: 0xaec300f8  sw          $v1, 0xF8($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 248), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A18A0u, 0x2A18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18A8u;
label_2a18a8:
    // 0x2a18a8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a18ac: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x2a18acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a18b0: 0x2477cbf0  addiu       $s7, $v1, -0x3410
    ctx->pc = 0x2a18b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953968));
    // 0x2a18b4: 0xaec400fc  sw          $a0, 0xFC($s6)
    ctx->pc = 0x2a18b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 252), GPR_U32(ctx, 4));
    // 0x2a18b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a18b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18bc: 0x0  nop
    ctx->pc = 0x2a18bcu;
    // NOP
label_2a18c0:
    // 0x2a18c0: 0x1490c0  sll         $s2, $s4, 3
    ctx->pc = 0x2a18c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2a18c4: 0x0  nop
    ctx->pc = 0x2a18c4u;
    // NOP
label_2a18c8:
    // 0x2a18c8: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2a18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2a18cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a18ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a18d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a18d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a18d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18d8: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x2a18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2a18dc: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2a18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2a18e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a18e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a18e4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A18E4u;
    SET_GPR_U32(ctx, 31, 0x2A18ECu);
    ctx->pc = 0x2A18E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18E4u;
    // 0x2a18e8: 0x2a28021  addu        $s0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A18E4u, 0x2A18ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18ECu;
label_2a18ec:
    // 0x2a18ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a18ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A18F0u;
    {
        const bool branch_taken_0x2a18f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18F0u;
        // 0x2a18f4: 0x2a240008  slti        $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18f0) {
            ctx->pc = 0x2A1904u;
            goto label_2a1904;
        }
    }
    ctx->pc = 0x2A18F8u;
    // 0x2a18f8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a18fc: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x2a18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x2a1900: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a1900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a1904:
    // 0x2a1904: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A1904u;
    {
        const bool branch_taken_0x2a1904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1904u;
        // 0x2a1908: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1904) {
            ctx->pc = 0x2A18C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a18c8;
        }
    }
    ctx->pc = 0x2A190Cu;
    // 0x2a190c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a190cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a1910: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2a1910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1914: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A1914u;
    {
        const bool branch_taken_0x2a1914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1914) {
            ctx->pc = 0x2A1918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1914u;
            // 0x2a1918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A18C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a18c0;
        }
    }
    ctx->pc = 0x2A191Cu;
    // 0x2a191c: 0x8e630150  lw          $v1, 0x150($s3)
    ctx->pc = 0x2a191cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x2a1920: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2a1920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2a1924: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1924u;
    {
        const bool branch_taken_0x2a1924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1924u;
        // 0x2a1928: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1924) {
            ctx->pc = 0x2A1940u;
            goto label_2a1940;
        }
    }
    ctx->pc = 0x2A192Cu;
    // 0x2a192c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A192Cu;
    {
        const bool branch_taken_0x2a192c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A192Cu;
        // 0x2a1930: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a192c) {
            ctx->pc = 0x2A1978u;
            goto label_2a1978;
        }
    }
    ctx->pc = 0x2A1934u;
    // 0x2a1934: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A1934u;
    {
        const bool branch_taken_0x2a1934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1934u;
        // 0x2a1938: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1934) {
            ctx->pc = 0x2A199Cu;
            goto label_2a199c;
        }
    }
    ctx->pc = 0x2A193Cu;
    // 0x2a193c: 0x0  nop
    ctx->pc = 0x2a193cu;
    // NOP
label_2a1940:
    // 0x2a1940: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a1940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a1944: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1948: 0x2450ca48  addiu       $s0, $v0, -0x35B8
    ctx->pc = 0x2a1948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953544));
    // 0x2a194c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A194Cu;
    SET_GPR_U32(ctx, 31, 0x2A1954u);
    ctx->pc = 0x2A1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A194Cu;
    // 0x2a1950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A194Cu, 0x2A1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1954u;
label_2a1954:
    // 0x2a1954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1958: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1958u;
    {
        const bool branch_taken_0x2a1958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1958u;
        // 0x2a195c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1958) {
            ctx->pc = 0x2A196Cu;
            goto label_2a196c;
        }
    }
    ctx->pc = 0x2A1960u;
    // 0x2a1960: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a1960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a1964: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a1964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a1968: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a1968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a196c:
    // 0x2a196c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1970: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1970u;
    {
        const bool branch_taken_0x2a1970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1970u;
        // 0x2a1974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1970) {
            ctx->pc = 0x2A1984u;
            goto label_2a1984;
        }
    }
    ctx->pc = 0x2A1978u;
label_2a1978:
    // 0x2a1978: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a1978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a197c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1980: 0x2445ca60  addiu       $a1, $v0, -0x35A0
    ctx->pc = 0x2a1980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
label_2a1984:
    // 0x2a1984: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A1984u;
    SET_GPR_U32(ctx, 31, 0x2A198Cu);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A1984u, 0x2A198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A198Cu;
label_2a198c:
    // 0x2a198c: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x2a198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a1990: 0xaec30108  sw          $v1, 0x108($s6)
    ctx->pc = 0x2a1990u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 264), GPR_U32(ctx, 3));
    // 0x2a1994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a1998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a199c:
    // 0x2a199c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a199cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a19a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a19a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a19a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a19a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a19a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a19a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a19ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2a19acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a19b0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2a19b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a19b4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2a19b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a19b8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2a19b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a19bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A19BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19BCu;
        // 0x2a19c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A19BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A19C4u;
    // 0x2a19c4: 0x0  nop
    ctx->pc = 0x2a19c4u;
    // NOP
    ctx->pc = 0x2a19c8u;
}
