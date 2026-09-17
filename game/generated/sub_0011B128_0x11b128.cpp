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

// Function: sub_0011B128
// Address: 0x11b128 - 0x11b340
void sub_0011B128_0x11b128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B128_0x11b128");
#endif

    switch (ctx->pc) {
        case 0x11b178u: goto label_11b178;
        case 0x11b19cu: goto label_11b19c;
        case 0x11b1a4u: goto label_11b1a4;
        case 0x11b1b8u: goto label_11b1b8;
        case 0x11b1d0u: goto label_11b1d0;
        case 0x11b204u: goto label_11b204;
        case 0x11b20cu: goto label_11b20c;
        case 0x11b220u: goto label_11b220;
        case 0x11b238u: goto label_11b238;
        case 0x11b280u: goto label_11b280;
        case 0x11b288u: goto label_11b288;
        case 0x11b298u: goto label_11b298;
        case 0x11b2b0u: goto label_11b2b0;
        case 0x11b2d8u: goto label_11b2d8;
        case 0x11b2f4u: goto label_11b2f4;
        default: break;
    }

    ctx->pc = 0x11b128u;

    // 0x11b128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b12c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11b130: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11b130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11b134: 0x2484e4c8  addiu       $a0, $a0, -0x1B38
    ctx->pc = 0x11b134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960328));
    // 0x11b138: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11b138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11b13c: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x11b13cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x11b140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11b148: 0x265027a0  addiu       $s0, $s2, 0x27A0
    ctx->pc = 0x11b148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 10144));
    // 0x11b14c: 0x8e4527a0  lw          $a1, 0x27A0($s2)
    ctx->pc = 0x11b14cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1327A0u));
    // 0x11b150: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x11b150u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1327A4u));
    // 0x11b154: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x11b154u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x1327A8u));
    // 0x11b158: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11b158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b15c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x11b15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11b160: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x11b160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x11b164: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x11b164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b168: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11b168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11b16c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11b16cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11b170: 0xc0447b4  jal         func_111ED0
    ctx->pc = 0x11B170u;
    SET_GPR_U32(ctx, 31, 0x11B178u);
    ctx->pc = 0x11B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B170u;
    // 0x11b174: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111ED0u, 0x11B170u, 0x11B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B178u;
label_11b178:
    // 0x11b178: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x11b178u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
    // 0x11b17c: 0x40f  sync.p
    ctx->pc = 0x11b17cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11b180: 0x8e5127a0  lw          $s1, 0x27A0($s2)
    ctx->pc = 0x11b180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10144)));
    // 0x11b184: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x11b184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x11b188: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B188u;
    {
        const bool branch_taken_0x11b188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B188u;
        // 0x11b18c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b188) {
            ctx->pc = 0x11B1A4u;
            goto label_11b1a4;
        }
    }
    ctx->pc = 0x11B190u;
    // 0x11b190: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11b190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11b194: 0xc0447b4  jal         func_111ED0
    ctx->pc = 0x11B194u;
    SET_GPR_U32(ctx, 31, 0x11B19Cu);
    ctx->pc = 0x11B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B194u;
    // 0x11b198: 0x2484e500  addiu       $a0, $a0, -0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111ED0u, 0x11B194u, 0x11B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B19Cu;
label_11b19c:
    // 0x11b19c: 0xc046418  jal         func_119060
    ctx->pc = 0x11B19Cu;
    SET_GPR_U32(ctx, 31, 0x11B1A4u);
    ctx->pc = 0x11B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B19Cu;
    // 0x11b1a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119060u, 0x11B19Cu, 0x11B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1A4u;
label_11b1a4:
    // 0x11b1a4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x11b1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b1a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11B1A8u;
    {
        const bool branch_taken_0x11b1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1A8u;
        // 0x11b1ac: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1a8) {
            ctx->pc = 0x11B1E0u;
            goto label_11b1e0;
        }
    }
    ctx->pc = 0x11B1B0u;
    // 0x11b1b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b1b4: 0x0  nop
    ctx->pc = 0x11b1b4u;
    // NOP
label_11b1b8:
    // 0x11b1b8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x11b1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1bc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x11b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11b1c0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x11b1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11b1c4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x11b1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11b1c8: 0xc046c12  jal         func_11B048
    ctx->pc = 0x11B1C8u;
    SET_GPR_U32(ctx, 31, 0x11B1D0u);
    ctx->pc = 0x11B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1C8u;
    // 0x11b1cc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B048u, 0x11B1C8u, 0x11B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1D0u;
label_11b1d0:
    // 0x11b1d0: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x11b1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x11b1d4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x11b1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b1d8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B1D8u;
    {
        const bool branch_taken_0x11b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b1d8) {
            ctx->pc = 0x11B1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B1D8u;
            // 0x11b1dc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B1E0u;
label_11b1e0:
    // 0x11b1e0: 0x265027a0  addiu       $s0, $s2, 0x27A0
    ctx->pc = 0x11b1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 10144));
    // 0x11b1e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11b1e8: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x11b1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x11b1ec: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x11b1ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x11b1f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B1F0u;
    {
        const bool branch_taken_0x11b1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1F0u;
        // 0x11b1f4: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1f0) {
            ctx->pc = 0x11B210u;
            goto label_11b210;
        }
    }
    ctx->pc = 0x11B1F8u;
    // 0x11b1f8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11b1fc: 0xc0447b4  jal         func_111ED0
    ctx->pc = 0x11B1FCu;
    SET_GPR_U32(ctx, 31, 0x11B204u);
    ctx->pc = 0x11B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1FCu;
    // 0x11b200: 0x2484e518  addiu       $a0, $a0, -0x1AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111ED0u, 0x11B1FCu, 0x11B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B204u;
label_11b204:
    // 0x11b204: 0xc046418  jal         func_119060
    ctx->pc = 0x11B204u;
    SET_GPR_U32(ctx, 31, 0x11B20Cu);
    ctx->pc = 0x11B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B204u;
    // 0x11b208: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119060u, 0x11B204u, 0x11B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B20Cu;
label_11b20c:
    // 0x11b20c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x11b20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_11b210:
    // 0x11b210: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11B210u;
    {
        const bool branch_taken_0x11b210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B210u;
        // 0x11b214: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b210) {
            ctx->pc = 0x11B248u;
            goto label_11b248;
        }
    }
    ctx->pc = 0x11B218u;
    // 0x11b218: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11b218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b21c: 0x0  nop
    ctx->pc = 0x11b21cu;
    // NOP
label_11b220:
    // 0x11b220: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x11b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b224: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x11b224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11b228: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x11b228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11b22c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x11b22cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11b230: 0xc046c12  jal         func_11B048
    ctx->pc = 0x11B230u;
    SET_GPR_U32(ctx, 31, 0x11B238u);
    ctx->pc = 0x11B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B230u;
    // 0x11b234: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B048u, 0x11B230u, 0x11B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B238u;
label_11b238:
    // 0x11b238: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x11b238u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x11b23c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x11b23cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b240: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B240u;
    {
        const bool branch_taken_0x11b240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b240) {
            ctx->pc = 0x11B244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B240u;
            // 0x11b244: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b220;
        }
    }
    ctx->pc = 0x11B248u;
label_11b248:
    // 0x11b248: 0x265027a0  addiu       $s0, $s2, 0x27A0
    ctx->pc = 0x11b248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 10144));
    // 0x11b24c: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x11b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x11b250: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x11b250u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x11b254: 0x40f  sync.p
    ctx->pc = 0x11b254u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11b258: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11b25c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11B25Cu;
    {
        const bool branch_taken_0x11b25c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11b25c) {
            ctx->pc = 0x11B260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B25Cu;
            // 0x11b260: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B2C4u;
            goto label_11b2c4;
        }
    }
    ctx->pc = 0x11B264u;
    // 0x11b264: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x11b264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x11b268: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x11b268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x11b26c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B26Cu;
    {
        const bool branch_taken_0x11b26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B26Cu;
        // 0x11b270: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b26c) {
            ctx->pc = 0x11B28Cu;
            goto label_11b28c;
        }
    }
    ctx->pc = 0x11B274u;
    // 0x11b274: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11b274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11b278: 0xc0447b4  jal         func_111ED0
    ctx->pc = 0x11B278u;
    SET_GPR_U32(ctx, 31, 0x11B280u);
    ctx->pc = 0x11B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B278u;
    // 0x11b27c: 0x2484e530  addiu       $a0, $a0, -0x1AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111ED0u, 0x11B278u, 0x11B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B280u;
label_11b280:
    // 0x11b280: 0xc046418  jal         func_119060
    ctx->pc = 0x11B280u;
    SET_GPR_U32(ctx, 31, 0x11B288u);
    ctx->pc = 0x11B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B280u;
    // 0x11b284: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119060u, 0x11B280u, 0x11B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B288u;
label_11b288:
    // 0x11b288: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x11b288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_11b28c:
    // 0x11b28c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11B28Cu;
    {
        const bool branch_taken_0x11b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B28Cu;
        // 0x11b290: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b28c) {
            ctx->pc = 0x11B2C0u;
            goto label_11b2c0;
        }
    }
    ctx->pc = 0x11B294u;
    // 0x11b294: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11b294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11b298:
    // 0x11b298: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x11b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b29c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x11b29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11b2a0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x11b2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11b2a4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x11b2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11b2a8: 0xc046c12  jal         func_11B048
    ctx->pc = 0x11B2A8u;
    SET_GPR_U32(ctx, 31, 0x11B2B0u);
    ctx->pc = 0x11B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2A8u;
    // 0x11b2ac: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B048u, 0x11B2A8u, 0x11B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2B0u;
label_11b2b0:
    // 0x11b2b0: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x11b2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x11b2b4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x11b2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b2b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B2B8u;
    {
        const bool branch_taken_0x11b2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b2b8) {
            ctx->pc = 0x11B2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B2B8u;
            // 0x11b2bc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b298;
        }
    }
    ctx->pc = 0x11B2C0u;
label_11b2c0:
    // 0x11b2c0: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x11b2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_11b2c4:
    // 0x11b2c4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x11b2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x11b2c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11B2C8u;
    {
        const bool branch_taken_0x11b2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2C8u;
        // 0x11b2cc: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2c8) {
            ctx->pc = 0x11B300u;
            goto label_11b300;
        }
    }
    ctx->pc = 0x11B2D0u;
    // 0x11b2d0: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x11b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x11b2d4: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x11b2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_11b2d8:
    // 0x11b2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11b2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b2e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2ec: 0xc046c12  jal         func_11B048
    ctx->pc = 0x11B2ECu;
    SET_GPR_U32(ctx, 31, 0x11B2F4u);
    ctx->pc = 0x11B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2ECu;
    // 0x11b2f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B048u, 0x11B2ECu, 0x11B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2F4u;
label_11b2f4:
    // 0x11b2f4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x11b2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x11b2f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B2F8u;
    {
        const bool branch_taken_0x11b2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2F8u;
        // 0x11b2fc: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2f8) {
            ctx->pc = 0x11B2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b2d8;
        }
    }
    ctx->pc = 0x11B300u;
label_11b300:
    // 0x11b300: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b304: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x11b304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b308: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11b308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b30c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11b30cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b314: 0x3e00008  jr          $ra
    ctx->pc = 0x11B314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B314u;
        // 0x11b318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B31Cu;
    // 0x11b31c: 0x0  nop
    ctx->pc = 0x11b31cu;
    // NOP
    // 0x11b320: 0x0  nop
    ctx->pc = 0x11b320u;
    // NOP
    // 0x11b324: 0x0  nop
    ctx->pc = 0x11b324u;
    // NOP
    // 0x11b328: 0x0  nop
    ctx->pc = 0x11b328u;
    // NOP
    // 0x11b32c: 0x0  nop
    ctx->pc = 0x11b32cu;
    // NOP
    // 0x11b330: 0x0  nop
    ctx->pc = 0x11b330u;
    // NOP
    // 0x11b334: 0x0  nop
    ctx->pc = 0x11b334u;
    // NOP
    // 0x11b338: 0x0  nop
    ctx->pc = 0x11b338u;
    // NOP
    // 0x11b33c: 0x0  nop
    ctx->pc = 0x11b33cu;
    // NOP
    ctx->pc = 0x11b340u;
}
