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

// Function: sub_0029F138
// Address: 0x29f138 - 0x29f400
void sub_0029F138_0x29f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F138_0x29f138");
#endif

    switch (ctx->pc) {
        case 0x29f1a4u: goto label_29f1a4;
        case 0x29f1d4u: goto label_29f1d4;
        case 0x29f204u: goto label_29f204;
        case 0x29f234u: goto label_29f234;
        case 0x29f264u: goto label_29f264;
        case 0x29f294u: goto label_29f294;
        case 0x29f2c4u: goto label_29f2c4;
        case 0x29f2f4u: goto label_29f2f4;
        case 0x29f324u: goto label_29f324;
        case 0x29f334u: goto label_29f334;
        case 0x29f344u: goto label_29f344;
        case 0x29f354u: goto label_29f354;
        case 0x29f364u: goto label_29f364;
        case 0x29f374u: goto label_29f374;
        case 0x29f384u: goto label_29f384;
        case 0x29f394u: goto label_29f394;
        case 0x29f3a8u: goto label_29f3a8;
        default: break;
    }

    ctx->pc = 0x29f138u;

    // 0x29f138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29f138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29f13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29f140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29f148: 0x26040158  addiu       $a0, $s0, 0x158
    ctx->pc = 0x29f148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x29f14c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29f14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29f150: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29f154: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29f158: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29f158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29f15c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29f160: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x29f164: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x29f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x29f168: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x29f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x29f16c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F170u;
    {
        const bool branch_taken_0x29f170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F170u;
        // 0x29f174: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f170) {
            ctx->pc = 0x29F188u;
            goto label_29f188;
        }
    }
    ctx->pc = 0x29F178u;
    // 0x29f178: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29f17c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29f180: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F180u;
    {
        const bool branch_taken_0x29f180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F180u;
        // 0x29f184: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f180) {
            ctx->pc = 0x29F198u;
            goto label_29f198;
        }
    }
    ctx->pc = 0x29F188u;
label_29f188:
    // 0x29f188: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29f188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x29f18c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29f18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f190: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29f190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29f194: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_29f198:
    // 0x29f198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f19c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F19Cu;
    SET_GPR_U32(ctx, 31, 0x29F1A4u);
    ctx->pc = 0x29F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F19Cu;
    // 0x29f1a0: 0x2445c988  addiu       $a1, $v0, -0x3678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F19Cu, 0x29F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1A4u;
label_29f1a4:
    // 0x29f1a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F1A4u;
    {
        const bool branch_taken_0x29f1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1A4u;
        // 0x29f1a8: 0x3c1e0048  lui         $fp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1a4) {
            ctx->pc = 0x29F1C8u;
            goto label_29f1c8;
        }
    }
    ctx->pc = 0x29F1ACu;
    // 0x29f1ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29f1b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F1B0u;
    {
        const bool branch_taken_0x29f1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1B0u;
        // 0x29f1b4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1b0) {
            ctx->pc = 0x29F1C8u;
            goto label_29f1c8;
        }
    }
    ctx->pc = 0x29F1B8u;
    // 0x29f1b8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f1bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f1c0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f1c4: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x29f1c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
label_29f1c8:
    // 0x29f1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1cc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F1CCu;
    SET_GPR_U32(ctx, 31, 0x29F1D4u);
    ctx->pc = 0x29F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1CCu;
    // 0x29f1d0: 0x27c5c998  addiu       $a1, $fp, -0x3668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F1CCu, 0x29F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1D4u;
label_29f1d4:
    // 0x29f1d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F1D4u;
    {
        const bool branch_taken_0x29f1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1D4u;
        // 0x29f1d8: 0x3c170048  lui         $s7, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1d4) {
            ctx->pc = 0x29F1F8u;
            goto label_29f1f8;
        }
    }
    ctx->pc = 0x29F1DCu;
    // 0x29f1dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29f1e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F1E0u;
    {
        const bool branch_taken_0x29f1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1E0u;
        // 0x29f1e4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1e0) {
            ctx->pc = 0x29F1F8u;
            goto label_29f1f8;
        }
    }
    ctx->pc = 0x29F1E8u;
    // 0x29f1e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f1ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f1f0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f1f4: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x29f1f4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
label_29f1f8:
    // 0x29f1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1fc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F1FCu;
    SET_GPR_U32(ctx, 31, 0x29F204u);
    ctx->pc = 0x29F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1FCu;
    // 0x29f200: 0x26e5c9a8  addiu       $a1, $s7, -0x3658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F1FCu, 0x29F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F204u;
label_29f204:
    // 0x29f204: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F204u;
    {
        const bool branch_taken_0x29f204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F204u;
        // 0x29f208: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f204) {
            ctx->pc = 0x29F228u;
            goto label_29f228;
        }
    }
    ctx->pc = 0x29F20Cu;
    // 0x29f20c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29f210: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F210u;
    {
        const bool branch_taken_0x29f210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F210u;
        // 0x29f214: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f210) {
            ctx->pc = 0x29F228u;
            goto label_29f228;
        }
    }
    ctx->pc = 0x29F218u;
    // 0x29f218: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f21c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f220: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f224: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x29f224u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
label_29f228:
    // 0x29f228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f22c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F22Cu;
    SET_GPR_U32(ctx, 31, 0x29F234u);
    ctx->pc = 0x29F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F22Cu;
    // 0x29f230: 0x26c5c9c0  addiu       $a1, $s6, -0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F22Cu, 0x29F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F234u;
label_29f234:
    // 0x29f234: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F234u;
    {
        const bool branch_taken_0x29f234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F234u;
        // 0x29f238: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f234) {
            ctx->pc = 0x29F258u;
            goto label_29f258;
        }
    }
    ctx->pc = 0x29F23Cu;
    // 0x29f23c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29f240: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F240u;
    {
        const bool branch_taken_0x29f240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F240u;
        // 0x29f244: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f240) {
            ctx->pc = 0x29F258u;
            goto label_29f258;
        }
    }
    ctx->pc = 0x29F248u;
    // 0x29f248: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f24c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f250: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f254: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x29f254u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_29f258:
    // 0x29f258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f25c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F25Cu;
    SET_GPR_U32(ctx, 31, 0x29F264u);
    ctx->pc = 0x29F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F25Cu;
    // 0x29f260: 0x26a5c9d8  addiu       $a1, $s5, -0x3628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F25Cu, 0x29F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F264u;
label_29f264:
    // 0x29f264: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F264u;
    {
        const bool branch_taken_0x29f264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F264u;
        // 0x29f268: 0x3c140048  lui         $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f264) {
            ctx->pc = 0x29F288u;
            goto label_29f288;
        }
    }
    ctx->pc = 0x29F26Cu;
    // 0x29f26c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29f270: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F270u;
    {
        const bool branch_taken_0x29f270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F270u;
        // 0x29f274: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f270) {
            ctx->pc = 0x29F288u;
            goto label_29f288;
        }
    }
    ctx->pc = 0x29F278u;
    // 0x29f278: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f27c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f280: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f284: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x29f284u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_29f288:
    // 0x29f288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f28c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F28Cu;
    SET_GPR_U32(ctx, 31, 0x29F294u);
    ctx->pc = 0x29F290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F28Cu;
    // 0x29f290: 0x2685c9f0  addiu       $a1, $s4, -0x3610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F28Cu, 0x29F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F294u;
label_29f294:
    // 0x29f294: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F294u;
    {
        const bool branch_taken_0x29f294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F294u;
        // 0x29f298: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f294) {
            ctx->pc = 0x29F2B8u;
            goto label_29f2b8;
        }
    }
    ctx->pc = 0x29F29Cu;
    // 0x29f29c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29f2a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F2A0u;
    {
        const bool branch_taken_0x29f2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2A0u;
        // 0x29f2a4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f2a0) {
            ctx->pc = 0x29F2B8u;
            goto label_29f2b8;
        }
    }
    ctx->pc = 0x29F2A8u;
    // 0x29f2a8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f2ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f2b0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f2b4: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x29f2b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
label_29f2b8:
    // 0x29f2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f2bc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F2BCu;
    SET_GPR_U32(ctx, 31, 0x29F2C4u);
    ctx->pc = 0x29F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2BCu;
    // 0x29f2c0: 0x2665ca08  addiu       $a1, $s3, -0x35F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294953480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F2BCu, 0x29F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2C4u;
label_29f2c4:
    // 0x29f2c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F2C4u;
    {
        const bool branch_taken_0x29f2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2C4u;
        // 0x29f2c8: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f2c4) {
            ctx->pc = 0x29F2E8u;
            goto label_29f2e8;
        }
    }
    ctx->pc = 0x29F2CCu;
    // 0x29f2cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29f2d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F2D0u;
    {
        const bool branch_taken_0x29f2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2D0u;
        // 0x29f2d4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f2d0) {
            ctx->pc = 0x29F2E8u;
            goto label_29f2e8;
        }
    }
    ctx->pc = 0x29F2D8u;
    // 0x29f2d8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f2dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f2e0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f2e4: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x29f2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
label_29f2e8:
    // 0x29f2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f2ec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F2ECu;
    SET_GPR_U32(ctx, 31, 0x29F2F4u);
    ctx->pc = 0x29F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2ECu;
    // 0x29f2f0: 0x2645ca28  addiu       $a1, $s2, -0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F2ECu, 0x29F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2F4u;
label_29f2f4:
    // 0x29f2f4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F2F4u;
    {
        const bool branch_taken_0x29f2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f2f4) {
            ctx->pc = 0x29F2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F2F4u;
            // 0x29f2f8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F318u;
            goto label_29f318;
        }
    }
    ctx->pc = 0x29F2FCu;
    // 0x29f2fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29f300: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F300u;
    {
        const bool branch_taken_0x29f300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F300u;
        // 0x29f304: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f300) {
            ctx->pc = 0x29F314u;
            goto label_29f314;
        }
    }
    ctx->pc = 0x29F308u;
    // 0x29f308: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f30c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f310: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_29f314:
    // 0x29f314: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_29f318:
    // 0x29f318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f31c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29F31Cu;
    SET_GPR_U32(ctx, 31, 0x29F324u);
    ctx->pc = 0x29F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F31Cu;
    // 0x29f320: 0x2445c988  addiu       $a1, $v0, -0x3678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29F31Cu, 0x29F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F324u;
label_29f324:
    // 0x29f324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f328: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x29f328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x29f32c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29F32Cu;
    SET_GPR_U32(ctx, 31, 0x29F334u);
    ctx->pc = 0x29F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F32Cu;
    // 0x29f330: 0x27c5c998  addiu       $a1, $fp, -0x3668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29F32Cu, 0x29F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F334u;
label_29f334:
    // 0x29f334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f338: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x29f338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x29f33c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29F33Cu;
    SET_GPR_U32(ctx, 31, 0x29F344u);
    ctx->pc = 0x29F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F33Cu;
    // 0x29f340: 0x26e5c9a8  addiu       $a1, $s7, -0x3658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29F33Cu, 0x29F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F344u;
label_29f344:
    // 0x29f344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f348: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x29f348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x29f34c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29F34Cu;
    SET_GPR_U32(ctx, 31, 0x29F354u);
    ctx->pc = 0x29F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F34Cu;
    // 0x29f350: 0x26c5c9c0  addiu       $a1, $s6, -0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29F34Cu, 0x29F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F354u;
label_29f354:
    // 0x29f354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f358: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x29f358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x29f35c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F35Cu;
    SET_GPR_U32(ctx, 31, 0x29F364u);
    ctx->pc = 0x29F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F35Cu;
    // 0x29f360: 0x26a5c9d8  addiu       $a1, $s5, -0x3628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F35Cu, 0x29F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F364u;
label_29f364:
    // 0x29f364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f368: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x29f368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x29f36c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F36Cu;
    SET_GPR_U32(ctx, 31, 0x29F374u);
    ctx->pc = 0x29F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F36Cu;
    // 0x29f370: 0x2685c9f0  addiu       $a1, $s4, -0x3610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F36Cu, 0x29F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F374u;
label_29f374:
    // 0x29f374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f378: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x29f378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x29f37c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F37Cu;
    SET_GPR_U32(ctx, 31, 0x29F384u);
    ctx->pc = 0x29F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F37Cu;
    // 0x29f380: 0x2665ca08  addiu       $a1, $s3, -0x35F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294953480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F37Cu, 0x29F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F384u;
label_29f384:
    // 0x29f384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f388: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x29f388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x29f38c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29F38Cu;
    SET_GPR_U32(ctx, 31, 0x29F394u);
    ctx->pc = 0x29F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F38Cu;
    // 0x29f390: 0x2645ca28  addiu       $a1, $s2, -0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29F38Cu, 0x29F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F394u;
label_29f394:
    // 0x29f394: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29f394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29f398: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x29f398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x29f39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3a0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29F3A0u;
    SET_GPR_U32(ctx, 31, 0x29F3A8u);
    ctx->pc = 0x29F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F3A0u;
    // 0x29f3a4: 0x24a5c978  addiu       $a1, $a1, -0x3688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29F3A0u, 0x29F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3A8u;
label_29f3a8:
    // 0x29f3a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F3ACu;
    {
        const bool branch_taken_0x29f3ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F3ACu;
        // 0x29f3b0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f3ac) {
            ctx->pc = 0x29F3C0u;
            goto label_29f3c0;
        }
    }
    ctx->pc = 0x29F3B4u;
    // 0x29f3b4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f3b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f3bc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_29f3c0:
    // 0x29f3c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f3c8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x29f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x29f3cc: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x29f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x29f3d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29f3d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f3d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29f3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29f3d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29f3d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f3dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29f3dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f3e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29f3e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29f3e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29f3e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f3e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29f3e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f3ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x29f3ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29f3f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x29f3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29f3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x29F3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F3F4u;
        // 0x29f3f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F3FCu;
    // 0x29f3fc: 0x0  nop
    ctx->pc = 0x29f3fcu;
    // NOP
    ctx->pc = 0x29f400u;
}
