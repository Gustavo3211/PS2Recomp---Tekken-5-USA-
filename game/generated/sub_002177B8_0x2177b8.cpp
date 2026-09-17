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

// Function: sub_002177B8
// Address: 0x2177b8 - 0x217898
void sub_002177B8_0x2177b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002177B8_0x2177b8");
#endif

    switch (ctx->pc) {
        case 0x2177d0u: goto label_2177d0;
        case 0x2177d8u: goto label_2177d8;
        case 0x2177ecu: goto label_2177ec;
        case 0x2177f4u: goto label_2177f4;
        case 0x217820u: goto label_217820;
        case 0x217828u: goto label_217828;
        case 0x217830u: goto label_217830;
        case 0x217840u: goto label_217840;
        case 0x217878u: goto label_217878;
        default: break;
    }

    ctx->pc = 0x2177b8u;

    // 0x2177b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2177b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2177bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2177bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2177c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2177c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2177c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2177c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2177c8: 0xc08f022  jal         func_23C088
    ctx->pc = 0x2177C8u;
    SET_GPR_U32(ctx, 31, 0x2177D0u);
    ctx->pc = 0x2177CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177C8u;
    // 0x2177cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x2177C8u, 0x2177D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177D0u;
label_2177d0:
    // 0x2177d0: 0xc089a00  jal         func_226800
    ctx->pc = 0x2177D0u;
    SET_GPR_U32(ctx, 31, 0x2177D8u);
    ctx->pc = 0x226800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226800u, 0x2177D0u, 0x2177D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177D8u;
label_2177d8:
    // 0x2177d8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2177d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2177dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2177DCu;
    {
        const bool branch_taken_0x2177dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2177E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177DCu;
        // 0x2177e0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177dc) {
            ctx->pc = 0x2177ECu;
            goto label_2177ec;
        }
    }
    ctx->pc = 0x2177E4u;
    // 0x2177e4: 0xc085210  jal         func_214840
    ctx->pc = 0x2177E4u;
    SET_GPR_U32(ctx, 31, 0x2177ECu);
    ctx->pc = 0x214840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214840u, 0x2177E4u, 0x2177ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177ECu;
label_2177ec:
    // 0x2177ec: 0xc08520c  jal         func_214830
    ctx->pc = 0x2177ECu;
    SET_GPR_U32(ctx, 31, 0x2177F4u);
    ctx->pc = 0x2177F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177ECu;
    // 0x2177f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214830u, 0x2177ECu, 0x2177F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177F4u;
label_2177f4:
    // 0x2177f4: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2177f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2177f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2177f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2177fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x217800: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x217800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x217804: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x217804u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x217808: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x217808u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x21780c: 0xa06001bb  sb          $zero, 0x1BB($v1)
    ctx->pc = 0x21780cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x217810: 0x16050003  bne         $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217810u;
    {
        const bool branch_taken_0x217810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x217814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217810u;
        // 0x217814: 0xa08001bb  sb          $zero, 0x1BB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217810) {
            ctx->pc = 0x217820u;
            goto label_217820;
        }
    }
    ctx->pc = 0x217818u;
    // 0x217818: 0xc0898be  jal         func_2262F8
    ctx->pc = 0x217818u;
    SET_GPR_U32(ctx, 31, 0x217820u);
    ctx->pc = 0x2262F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262F8u, 0x217818u, 0x217820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217820u;
label_217820:
    // 0x217820: 0xc0b69ca  jal         func_2DA728
    ctx->pc = 0x217820u;
    SET_GPR_U32(ctx, 31, 0x217828u);
    ctx->pc = 0x217824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217820u;
    // 0x217824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA728u, 0x217820u, 0x217828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217828u;
label_217828:
    // 0x217828: 0xc0b6b36  jal         func_2DACD8
    ctx->pc = 0x217828u;
    SET_GPR_U32(ctx, 31, 0x217830u);
    ctx->pc = 0x2DACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACD8u, 0x217828u, 0x217830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217830u;
label_217830:
    // 0x217830: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x217830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x217834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x217834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217838: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x217838u;
    SET_GPR_U32(ctx, 31, 0x217840u);
    ctx->pc = 0x21783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217838u;
    // 0x21783c: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x217838u, 0x217840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217840u;
label_217840:
    // 0x217840: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217844: 0x24470058  addiu       $a3, $v0, 0x58
    ctx->pc = 0x217844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x217848: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x217848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21784c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21784Cu;
    {
        const bool branch_taken_0x21784c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x217850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21784Cu;
        // 0x217850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21784c) {
            ctx->pc = 0x217864u;
            goto label_217864;
        }
    }
    ctx->pc = 0x217854u;
    // 0x217854: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x217854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x217858: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x217858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21785c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21785Cu;
    {
        const bool branch_taken_0x21785c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21785c) {
            ctx->pc = 0x217870u;
            goto label_217870;
        }
    }
    ctx->pc = 0x217864u;
label_217864:
    // 0x217864: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x217864u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x217868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21786c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x21786cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_217870:
    // 0x217870: 0xc090280  jal         func_240A00
    ctx->pc = 0x217870u;
    SET_GPR_U32(ctx, 31, 0x217878u);
    ctx->pc = 0x240A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240A00u, 0x217870u, 0x217878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217878u;
label_217878:
    // 0x217878: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x217878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21787c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21787cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217880: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x217880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x217884: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x217884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21788c: 0xac83886c  sw          $v1, -0x7794($a0)
    ctx->pc = 0x21788cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x217890: 0x3e00008  jr          $ra
    ctx->pc = 0x217890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217890u;
        // 0x217894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217898u;
}
