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

// Function: sub_002CC168
// Address: 0x2cc168 - 0x2cc770
void sub_002CC168_0x2cc168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC168_0x2cc168");
#endif

    switch (ctx->pc) {
        case 0x2cc1e4u: goto label_2cc1e4;
        case 0x2cc1f0u: goto label_2cc1f0;
        case 0x2cc1fcu: goto label_2cc1fc;
        case 0x2cc208u: goto label_2cc208;
        case 0x2cc218u: goto label_2cc218;
        case 0x2cc248u: goto label_2cc248;
        case 0x2cc278u: goto label_2cc278;
        case 0x2cc2a8u: goto label_2cc2a8;
        case 0x2cc2d8u: goto label_2cc2d8;
        case 0x2cc308u: goto label_2cc308;
        case 0x2cc340u: goto label_2cc340;
        case 0x2cc354u: goto label_2cc354;
        case 0x2cc368u: goto label_2cc368;
        case 0x2cc37cu: goto label_2cc37c;
        case 0x2cc390u: goto label_2cc390;
        case 0x2cc3a0u: goto label_2cc3a0;
        case 0x2cc3c8u: goto label_2cc3c8;
        case 0x2cc3ecu: goto label_2cc3ec;
        case 0x2cc418u: goto label_2cc418;
        case 0x2cc42cu: goto label_2cc42c;
        case 0x2cc44cu: goto label_2cc44c;
        case 0x2cc464u: goto label_2cc464;
        case 0x2cc470u: goto label_2cc470;
        case 0x2cc478u: goto label_2cc478;
        case 0x2cc4b0u: goto label_2cc4b0;
        case 0x2cc4d0u: goto label_2cc4d0;
        case 0x2cc4d8u: goto label_2cc4d8;
        case 0x2cc4dcu: goto label_2cc4dc;
        case 0x2cc4e8u: goto label_2cc4e8;
        case 0x2cc564u: goto label_2cc564;
        case 0x2cc5acu: goto label_2cc5ac;
        case 0x2cc5f4u: goto label_2cc5f4;
        case 0x2cc63cu: goto label_2cc63c;
        case 0x2cc658u: goto label_2cc658;
        case 0x2cc664u: goto label_2cc664;
        case 0x2cc69cu: goto label_2cc69c;
        case 0x2cc6d8u: goto label_2cc6d8;
        case 0x2cc6f4u: goto label_2cc6f4;
        case 0x2cc70cu: goto label_2cc70c;
        case 0x2cc724u: goto label_2cc724;
        case 0x2cc73cu: goto label_2cc73c;
        default: break;
    }

    ctx->pc = 0x2cc168u;

    // 0x2cc168: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x2cc168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x2cc16c: 0xffb20260  sd          $s2, 0x260($sp)
    ctx->pc = 0x2cc16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 18));
    // 0x2cc170: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cc170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc174: 0xffb00250  sd          $s0, 0x250($sp)
    ctx->pc = 0x2cc174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 16));
    // 0x2cc178: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x2cc178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2cc17c: 0xffb10258  sd          $s1, 0x258($sp)
    ctx->pc = 0x2cc17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 17));
    // 0x2cc180: 0xffb30268  sd          $s3, 0x268($sp)
    ctx->pc = 0x2cc180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 19));
    // 0x2cc184: 0xffb40270  sd          $s4, 0x270($sp)
    ctx->pc = 0x2cc184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
    // 0x2cc188: 0xffb50278  sd          $s5, 0x278($sp)
    ctx->pc = 0x2cc188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 21));
    // 0x2cc18c: 0xffb60280  sd          $s6, 0x280($sp)
    ctx->pc = 0x2cc18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 22));
    // 0x2cc190: 0xffb70288  sd          $s7, 0x288($sp)
    ctx->pc = 0x2cc190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 23));
    // 0x2cc194: 0xffbf0290  sd          $ra, 0x290($sp)
    ctx->pc = 0x2cc194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 31));
    // 0x2cc198: 0xe7b502a0  swc1        $f21, 0x2A0($sp)
    ctx->pc = 0x2cc198u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2cc19c: 0xe7b40298  swc1        $f20, 0x298($sp)
    ctx->pc = 0x2cc19cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x2cc1a0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2cc1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cc1a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC1A4u;
    {
        const bool branch_taken_0x2cc1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc1a4) {
            ctx->pc = 0x2CC1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC1A4u;
            // 0x2cc1a8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC1C0u;
            goto label_2cc1c0;
        }
    }
    ctx->pc = 0x2CC1ACu;
    // 0x2cc1ac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cc1b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cc1b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC1B4u;
    {
        const bool branch_taken_0x2cc1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1B4u;
        // 0x2cc1b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1b4) {
            ctx->pc = 0x2CC1C8u;
            goto label_2cc1c8;
        }
    }
    ctx->pc = 0x2CC1BCu;
    // 0x2cc1bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2cc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2cc1c0:
    // 0x2cc1c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cc1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1c4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2cc1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2cc1c8:
    // 0x2cc1c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1d4: 0x8e550078  lw          $s5, 0x78($s2)
    ctx->pc = 0x2cc1d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2cc1d8: 0x8e56007c  lw          $s6, 0x7C($s2)
    ctx->pc = 0x2cc1d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x2cc1dc: 0xc0b354e  jal         func_2CD538
    ctx->pc = 0x2CC1DCu;
    SET_GPR_U32(ctx, 31, 0x2CC1E4u);
    ctx->pc = 0x2CC1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1DCu;
    // 0x2cc1e0: 0x8e530080  lw          $s3, 0x80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD538u, 0x2CC1DCu, 0x2CC1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1E4u;
label_2cc1e4:
    // 0x2cc1e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1e8: 0xc0b3656  jal         func_2CD958
    ctx->pc = 0x2CC1E8u;
    SET_GPR_U32(ctx, 31, 0x2CC1F0u);
    ctx->pc = 0x2CC1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1E8u;
    // 0x2cc1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD958u, 0x2CC1E8u, 0x2CC1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1F0u;
label_2cc1f0:
    // 0x2cc1f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1f4: 0xc0b37aa  jal         func_2CDEA8
    ctx->pc = 0x2CC1F4u;
    SET_GPR_U32(ctx, 31, 0x2CC1FCu);
    ctx->pc = 0x2CC1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1F4u;
    // 0x2cc1f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDEA8u, 0x2CC1F4u, 0x2CC1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1FCu;
label_2cc1fc:
    // 0x2cc1fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc200: 0xc0b36e6  jal         func_2CDB98
    ctx->pc = 0x2CC200u;
    SET_GPR_U32(ctx, 31, 0x2CC208u);
    ctx->pc = 0x2CC204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC200u;
    // 0x2cc204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDB98u, 0x2CC200u, 0x2CC208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC208u;
label_2cc208:
    // 0x2cc208: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cc20c: 0x24a5e7a0  addiu       $a1, $a1, -0x1860
    ctx->pc = 0x2cc20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961056));
    // 0x2cc210: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC210u;
    SET_GPR_U32(ctx, 31, 0x2CC218u);
    ctx->pc = 0x2CC214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC210u;
    // 0x2cc214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC210u, 0x2CC218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC218u;
label_2cc218:
    // 0x2cc218: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC218u;
    {
        const bool branch_taken_0x2cc218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC218u;
        // 0x2cc21c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc218) {
            ctx->pc = 0x2CC23Cu;
            goto label_2cc23c;
        }
    }
    ctx->pc = 0x2CC220u;
    // 0x2cc220: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cc220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc224: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC224u;
    {
        const bool branch_taken_0x2cc224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC224u;
        // 0x2cc228: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc224) {
            ctx->pc = 0x2CC23Cu;
            goto label_2cc23c;
        }
    }
    ctx->pc = 0x2CC22Cu;
    // 0x2cc22c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cc22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cc230: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc234: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cc234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cc238: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cc23c:
    // 0x2cc23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc240: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC240u;
    SET_GPR_U32(ctx, 31, 0x2CC248u);
    ctx->pc = 0x2CC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC240u;
    // 0x2cc244: 0x24a5e7b8  addiu       $a1, $a1, -0x1848 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC240u, 0x2CC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC248u;
label_2cc248:
    // 0x2cc248: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC248u;
    {
        const bool branch_taken_0x2cc248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc248) {
            ctx->pc = 0x2CC24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC248u;
            // 0x2cc24c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC26Cu;
            goto label_2cc26c;
        }
    }
    ctx->pc = 0x2CC250u;
    // 0x2cc250: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cc250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc254: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC254u;
    {
        const bool branch_taken_0x2cc254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC254u;
        // 0x2cc258: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc254) {
            ctx->pc = 0x2CC268u;
            goto label_2cc268;
        }
    }
    ctx->pc = 0x2CC25Cu;
    // 0x2cc25c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cc260: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc264: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cc264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cc268:
    // 0x2cc268: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cc26c:
    // 0x2cc26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc270: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC270u;
    SET_GPR_U32(ctx, 31, 0x2CC278u);
    ctx->pc = 0x2CC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC270u;
    // 0x2cc274: 0x24a5e7d0  addiu       $a1, $a1, -0x1830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC270u, 0x2CC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC278u;
label_2cc278:
    // 0x2cc278: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC278u;
    {
        const bool branch_taken_0x2cc278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc278) {
            ctx->pc = 0x2CC27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC278u;
            // 0x2cc27c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC29Cu;
            goto label_2cc29c;
        }
    }
    ctx->pc = 0x2CC280u;
    // 0x2cc280: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cc280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc284: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC284u;
    {
        const bool branch_taken_0x2cc284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC284u;
        // 0x2cc288: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc284) {
            ctx->pc = 0x2CC298u;
            goto label_2cc298;
        }
    }
    ctx->pc = 0x2CC28Cu;
    // 0x2cc28c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cc28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cc290: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc294: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cc294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cc298:
    // 0x2cc298: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cc29c:
    // 0x2cc29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc2a0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC2A0u;
    SET_GPR_U32(ctx, 31, 0x2CC2A8u);
    ctx->pc = 0x2CC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2A0u;
    // 0x2cc2a4: 0x24a5e7e8  addiu       $a1, $a1, -0x1818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC2A0u, 0x2CC2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2A8u;
label_2cc2a8:
    // 0x2cc2a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC2A8u;
    {
        const bool branch_taken_0x2cc2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc2a8) {
            ctx->pc = 0x2CC2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC2A8u;
            // 0x2cc2ac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC2CCu;
            goto label_2cc2cc;
        }
    }
    ctx->pc = 0x2CC2B0u;
    // 0x2cc2b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc2b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC2B4u;
    {
        const bool branch_taken_0x2cc2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2B4u;
        // 0x2cc2b8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2b4) {
            ctx->pc = 0x2CC2C8u;
            goto label_2cc2c8;
        }
    }
    ctx->pc = 0x2CC2BCu;
    // 0x2cc2bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cc2c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc2c4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cc2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cc2c8:
    // 0x2cc2c8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cc2cc:
    // 0x2cc2cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc2d0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC2D0u;
    SET_GPR_U32(ctx, 31, 0x2CC2D8u);
    ctx->pc = 0x2CC2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2D0u;
    // 0x2cc2d4: 0x24a5e800  addiu       $a1, $a1, -0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC2D0u, 0x2CC2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2D8u;
label_2cc2d8:
    // 0x2cc2d8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC2D8u;
    {
        const bool branch_taken_0x2cc2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc2d8) {
            ctx->pc = 0x2CC2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC2D8u;
            // 0x2cc2dc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC2FCu;
            goto label_2cc2fc;
        }
    }
    ctx->pc = 0x2CC2E0u;
    // 0x2cc2e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cc2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc2e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC2E4u;
    {
        const bool branch_taken_0x2cc2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2E4u;
        // 0x2cc2e8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2e4) {
            ctx->pc = 0x2CC2F8u;
            goto label_2cc2f8;
        }
    }
    ctx->pc = 0x2CC2ECu;
    // 0x2cc2ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cc2f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc2f4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cc2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cc2f8:
    // 0x2cc2f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cc2fc:
    // 0x2cc2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc300: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC300u;
    SET_GPR_U32(ctx, 31, 0x2CC308u);
    ctx->pc = 0x2CC304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC300u;
    // 0x2cc304: 0x24a5e818  addiu       $a1, $a1, -0x17E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC300u, 0x2CC308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC308u;
label_2cc308:
    // 0x2cc308: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC308u;
    {
        const bool branch_taken_0x2cc308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC308u;
        // 0x2cc30c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc308) {
            ctx->pc = 0x2CC32Cu;
            goto label_2cc32c;
        }
    }
    ctx->pc = 0x2CC310u;
    // 0x2cc310: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cc310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc314: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC314u;
    {
        const bool branch_taken_0x2cc314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC314u;
        // 0x2cc318: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc314) {
            ctx->pc = 0x2CC32Cu;
            goto label_2cc32c;
        }
    }
    ctx->pc = 0x2CC31Cu;
    // 0x2cc31c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cc31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cc320: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc324: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cc324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cc328: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cc32c:
    // 0x2cc32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc330: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2cc330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2cc334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2cc338: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC338u;
    SET_GPR_U32(ctx, 31, 0x2CC340u);
    ctx->pc = 0x2CC33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC338u;
    // 0x2cc33c: 0x24a5e830  addiu       $a1, $a1, -0x17D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC338u, 0x2CC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC340u;
label_2cc340:
    // 0x2cc340: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cc344: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2cc344u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc34c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC34Cu;
    SET_GPR_U32(ctx, 31, 0x2CC354u);
    ctx->pc = 0x2CC350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC34Cu;
    // 0x2cc350: 0x24a5e840  addiu       $a1, $a1, -0x17C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC34Cu, 0x2CC354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC354u;
label_2cc354:
    // 0x2cc354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc358: 0xc78c9374  lwc1        $f12, -0x6C8C($gp)
    ctx->pc = 0x2cc358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cc35c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2cc35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cc360: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC360u;
    SET_GPR_U32(ctx, 31, 0x2CC368u);
    ctx->pc = 0x2CC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC360u;
    // 0x2cc364: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC360u, 0x2CC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC368u;
label_2cc368:
    // 0x2cc368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc36c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2cc36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2cc370: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc374: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC374u;
    SET_GPR_U32(ctx, 31, 0x2CC37Cu);
    ctx->pc = 0x2CC378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC374u;
    // 0x2cc378: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC374u, 0x2CC37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC37Cu;
label_2cc37c:
    // 0x2cc37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc380: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2cc380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2cc384: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc388: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC388u;
    SET_GPR_U32(ctx, 31, 0x2CC390u);
    ctx->pc = 0x2CC38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC388u;
    // 0x2cc38c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC388u, 0x2CC390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC390u;
label_2cc390:
    // 0x2cc390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc394: 0xc78c9378  lwc1        $f12, -0x6C88($gp)
    ctx->pc = 0x2cc394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cc398: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC398u;
    SET_GPR_U32(ctx, 31, 0x2CC3A0u);
    ctx->pc = 0x2CC39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC398u;
    // 0x2cc39c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC398u, 0x2CC3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3A0u;
label_2cc3a0:
    // 0x2cc3a0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2cc3a0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc3a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cc3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cc3a8: 0x3c01c387  lui         $at, 0xC387
    ctx->pc = 0x2cc3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50055 << 16));
    // 0x2cc3ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cc3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc3b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2cc3b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2cc3bc: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x2cc3bcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc3c0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC3C0u;
    SET_GPR_U32(ctx, 31, 0x2CC3C8u);
    ctx->pc = 0x2CC3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC3C0u;
    // 0x2cc3c4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC3C0u, 0x2CC3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3C8u;
label_2cc3c8:
    // 0x2cc3c8: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x2cc3c8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc3cc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2cc3ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2cc3d0: 0x3c0142d6  lui         $at, 0x42D6
    ctx->pc = 0x2cc3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17110 << 16));
    // 0x2cc3d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cc3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cc3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc3e0: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x2cc3e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x2cc3e4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC3E4u;
    SET_GPR_U32(ctx, 31, 0x2CC3ECu);
    ctx->pc = 0x2CC3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC3E4u;
    // 0x2cc3e8: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC3E4u, 0x2CC3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3ECu;
label_2cc3ec:
    // 0x2cc3ec: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x2cc3ecu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc3f0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2cc3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2cc3f4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2cc3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2cc3f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cc3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc3fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc400: 0x3c01c2e4  lui         $at, 0xC2E4
    ctx->pc = 0x2cc400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49892 << 16));
    // 0x2cc404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cc404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc40c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2cc40cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2cc410: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC410u;
    SET_GPR_U32(ctx, 31, 0x2CC418u);
    ctx->pc = 0x2CC414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC410u;
    // 0x2cc414: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC410u, 0x2CC418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC418u;
label_2cc418:
    // 0x2cc418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc41c: 0x3c01430e  lui         $at, 0x430E
    ctx->pc = 0x2cc41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17166 << 16));
    // 0x2cc420: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc424: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC424u;
    SET_GPR_U32(ctx, 31, 0x2CC42Cu);
    ctx->pc = 0x2CC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC424u;
    // 0x2cc428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC424u, 0x2CC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC42Cu;
label_2cc42c:
    // 0x2cc42c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2cc42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2cc430: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CC430u;
    {
        const bool branch_taken_0x2cc430 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC430u;
        // 0x2cc434: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc430) {
            ctx->pc = 0x2CC468u;
            goto label_2cc468;
        }
    }
    ctx->pc = 0x2CC438u;
    // 0x2cc438: 0x3c014198  lui         $at, 0x4198
    ctx->pc = 0x2cc438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16792 << 16));
    // 0x2cc43c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc444: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC444u;
    SET_GPR_U32(ctx, 31, 0x2CC44Cu);
    ctx->pc = 0x2CC448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC444u;
    // 0x2cc448: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC444u, 0x2CC44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC44Cu;
label_2cc44c:
    // 0x2cc44c: 0x3c0142b8  lui         $at, 0x42B8
    ctx->pc = 0x2cc44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17080 << 16));
    // 0x2cc450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc45c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CC45Cu;
    SET_GPR_U32(ctx, 31, 0x2CC464u);
    ctx->pc = 0x2CC460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC45Cu;
    // 0x2cc460: 0x460cab00  add.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CC45Cu, 0x2CC464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC464u;
label_2cc464:
    // 0x2cc464: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2cc464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cc468:
    // 0x2cc468: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x2CC468u;
    SET_GPR_U32(ctx, 31, 0x2CC470u);
    ctx->pc = 0x2CC46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC468u;
    // 0x2cc46c: 0x2645005c  addiu       $a1, $s2, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x2CC468u, 0x2CC470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC470u;
label_2cc470:
    // 0x2cc470: 0xc0b66b4  jal         func_2D9AD0
    ctx->pc = 0x2CC470u;
    SET_GPR_U32(ctx, 31, 0x2CC478u);
    ctx->pc = 0x2CC474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC470u;
    // 0x2cc474: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9AD0u, 0x2CC470u, 0x2CC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC478u;
label_2cc478:
    // 0x2cc478: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2cc478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2cc47c: 0x3c0980ff  lui         $t1, 0x80FF
    ctx->pc = 0x2cc47cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)33023 << 16));
    // 0x2cc480: 0x2484e858  addiu       $a0, $a0, -0x17A8
    ctx->pc = 0x2cc480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961240));
    // 0x2cc484: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2cc484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cc488: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cc488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc48c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc490: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cc490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc494: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2cc494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2cc498: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2cc498u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2cc49c: 0x240a00c8  addiu       $t2, $zero, 0xC8
    ctx->pc = 0x2cc49cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2cc4a0: 0x240b003c  addiu       $t3, $zero, 0x3C
    ctx->pc = 0x2cc4a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cc4a4: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x2cc4a4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x2cc4a8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC4A8u;
    SET_GPR_U32(ctx, 31, 0x2CC4B0u);
    ctx->pc = 0x2CC4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC4A8u;
    // 0x2cc4ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC4A8u, 0x2CC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4B0u;
label_2cc4b0:
    // 0x2cc4b0: 0x8e540074  lw          $s4, 0x74($s2)
    ctx->pc = 0x2cc4b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x2cc4b4: 0x26e4e770  addiu       $a0, $s7, -0x1890
    ctx->pc = 0x2cc4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961008));
    // 0x2cc4b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cc4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc4bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc4c0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cc4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc4c4: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2cc4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2cc4c8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC4C8u;
    SET_GPR_U32(ctx, 31, 0x2CC4D0u);
    ctx->pc = 0x2CC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC4C8u;
    // 0x2cc4cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC4C8u, 0x2CC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4D0u;
label_2cc4d0:
    // 0x2cc4d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cc4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc4d4: 0x0  nop
    ctx->pc = 0x2cc4d4u;
    // NOP
label_2cc4d8:
    // 0x2cc4d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cc4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cc4dc:
    // 0x2cc4dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cc4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc4e0: 0xc0b2d0e  jal         func_2CB438
    ctx->pc = 0x2CC4E0u;
    SET_GPR_U32(ctx, 31, 0x2CC4E8u);
    ctx->pc = 0x2CC4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC4E0u;
    // 0x2cc4e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB438u, 0x2CC4E0u, 0x2CC4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4E8u;
label_2cc4e8:
    // 0x2cc4e8: 0x16b20004  bne         $s5, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC4E8u;
    {
        const bool branch_taken_0x2cc4e8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 18));
        ctx->pc = 0x2CC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4E8u;
        // 0x2cc4ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4e8) {
            ctx->pc = 0x2CC4FCu;
            goto label_2cc4fc;
        }
    }
    ctx->pc = 0x2CC4F0u;
    // 0x2cc4f0: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2cc4f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x2cc4f4: 0x12d30003  beq         $s6, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC4F4u;
    {
        const bool branch_taken_0x2cc4f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 19));
        ctx->pc = 0x2CC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4F4u;
        // 0x2cc4f8: 0x363160ff  ori         $s1, $s1, 0x60FF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)24831);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4f4) {
            ctx->pc = 0x2CC504u;
            goto label_2cc504;
        }
    }
    ctx->pc = 0x2CC4FCu;
label_2cc4fc:
    // 0x2cc4fc: 0x3c1180ff  lui         $s1, 0x80FF
    ctx->pc = 0x2cc4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33023 << 16));
    // 0x2cc500: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x2cc500u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_2cc504:
    // 0x2cc504: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x2cc504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cc508: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2CC508u;
    {
        const bool branch_taken_0x2cc508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC508u;
        // 0x2cc50c: 0x27b00210  addiu       $s0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc508) {
            ctx->pc = 0x2CC648u;
            goto label_2cc648;
        }
    }
    ctx->pc = 0x2CC510u;
    // 0x2cc510: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2cc510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cc514: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2cc514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2cc518: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cc518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc51c: 0x8c63e890  lw          $v1, -0x1770($v1)
    ctx->pc = 0x2cc51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961296)));
    // 0x2cc520: 0x600008  jr          $v1
    ctx->pc = 0x2CC520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CC528u: goto label_2cc528;
            case 0x2CC570u: goto label_2cc570;
            case 0x2CC5B8u: goto label_2cc5b8;
            case 0x2CC600u: goto label_2cc600;
            case 0x2CC69Cu: goto label_2cc69c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC520u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CC528u;
label_2cc528:
    // 0x2cc528: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x2cc528u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2cc52c: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x2cc52cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2cc530: 0xf23823  subu        $a3, $a3, $s2
    ctx->pc = 0x2cc530u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2cc534: 0x1134023  subu        $t0, $t0, $s3
    ctx->pc = 0x2cc534u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x2cc538: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2cc538u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cc53c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x2cc53cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2cc540: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2cc540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2cc544: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2cc544u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2cc548: 0x2484e870  addiu       $a0, $a0, -0x1790
    ctx->pc = 0x2cc548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961264));
    // 0x2cc54c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cc54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc550: 0x24e7004b  addiu       $a3, $a3, 0x4B
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 75));
    // 0x2cc554: 0x25080069  addiu       $t0, $t0, 0x69
    ctx->pc = 0x2cc554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 105));
    // 0x2cc558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc55c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC55Cu;
    SET_GPR_U32(ctx, 31, 0x2CC564u);
    ctx->pc = 0x2CC560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC55Cu;
    // 0x2cc560: 0x3529000b  ori         $t1, $t1, 0xB (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC55Cu, 0x2CC564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC564u;
label_2cc564:
    // 0x2cc564: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2CC564u;
    {
        const bool branch_taken_0x2cc564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC564u;
        // 0x2cc568: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc564) {
            ctx->pc = 0x2CC6A0u;
            goto label_2cc6a0;
        }
    }
    ctx->pc = 0x2CC56Cu;
    // 0x2cc56c: 0x0  nop
    ctx->pc = 0x2cc56cu;
    // NOP
label_2cc570:
    // 0x2cc570: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x2cc570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2cc574: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x2cc574u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2cc578: 0xf23823  subu        $a3, $a3, $s2
    ctx->pc = 0x2cc578u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2cc57c: 0x1134023  subu        $t0, $t0, $s3
    ctx->pc = 0x2cc57cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x2cc580: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2cc580u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cc584: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x2cc584u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2cc588: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2cc588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2cc58c: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2cc58cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2cc590: 0x2484e870  addiu       $a0, $a0, -0x1790
    ctx->pc = 0x2cc590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961264));
    // 0x2cc594: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cc594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc598: 0x24e7004b  addiu       $a3, $a3, 0x4B
    ctx->pc = 0x2cc598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 75));
    // 0x2cc59c: 0x25080069  addiu       $t0, $t0, 0x69
    ctx->pc = 0x2cc59cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 105));
    // 0x2cc5a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5a4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC5A4u;
    SET_GPR_U32(ctx, 31, 0x2CC5ACu);
    ctx->pc = 0x2CC5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5A4u;
    // 0x2cc5a8: 0x3529000c  ori         $t1, $t1, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC5A4u, 0x2CC5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5ACu;
label_2cc5ac:
    // 0x2cc5ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2CC5ACu;
    {
        const bool branch_taken_0x2cc5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5ACu;
        // 0x2cc5b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5ac) {
            ctx->pc = 0x2CC6A0u;
            goto label_2cc6a0;
        }
    }
    ctx->pc = 0x2CC5B4u;
    // 0x2cc5b4: 0x0  nop
    ctx->pc = 0x2cc5b4u;
    // NOP
label_2cc5b8:
    // 0x2cc5b8: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x2cc5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2cc5bc: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x2cc5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2cc5c0: 0xf23823  subu        $a3, $a3, $s2
    ctx->pc = 0x2cc5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2cc5c4: 0x1134023  subu        $t0, $t0, $s3
    ctx->pc = 0x2cc5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x2cc5c8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2cc5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cc5cc: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x2cc5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2cc5d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2cc5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2cc5d4: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2cc5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2cc5d8: 0x2484e870  addiu       $a0, $a0, -0x1790
    ctx->pc = 0x2cc5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961264));
    // 0x2cc5dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cc5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5e0: 0x24e7004b  addiu       $a3, $a3, 0x4B
    ctx->pc = 0x2cc5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 75));
    // 0x2cc5e4: 0x25080069  addiu       $t0, $t0, 0x69
    ctx->pc = 0x2cc5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 105));
    // 0x2cc5e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5ec: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC5ECu;
    SET_GPR_U32(ctx, 31, 0x2CC5F4u);
    ctx->pc = 0x2CC5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5ECu;
    // 0x2cc5f0: 0x3529000e  ori         $t1, $t1, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC5ECu, 0x2CC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5F4u;
label_2cc5f4:
    // 0x2cc5f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2CC5F4u;
    {
        const bool branch_taken_0x2cc5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5F4u;
        // 0x2cc5f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5f4) {
            ctx->pc = 0x2CC6A0u;
            goto label_2cc6a0;
        }
    }
    ctx->pc = 0x2CC5FCu;
    // 0x2cc5fc: 0x0  nop
    ctx->pc = 0x2cc5fcu;
    // NOP
label_2cc600:
    // 0x2cc600: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x2cc600u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2cc604: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x2cc604u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2cc608: 0xf23823  subu        $a3, $a3, $s2
    ctx->pc = 0x2cc608u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2cc60c: 0x1134023  subu        $t0, $t0, $s3
    ctx->pc = 0x2cc60cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x2cc610: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2cc610u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cc614: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x2cc614u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2cc618: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2cc618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2cc61c: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2cc61cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2cc620: 0x2484e870  addiu       $a0, $a0, -0x1790
    ctx->pc = 0x2cc620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961264));
    // 0x2cc624: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cc624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc628: 0x24e7004b  addiu       $a3, $a3, 0x4B
    ctx->pc = 0x2cc628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 75));
    // 0x2cc62c: 0x25080069  addiu       $t0, $t0, 0x69
    ctx->pc = 0x2cc62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 105));
    // 0x2cc630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc634: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC634u;
    SET_GPR_U32(ctx, 31, 0x2CC63Cu);
    ctx->pc = 0x2CC638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC634u;
    // 0x2cc638: 0x3529000f  ori         $t1, $t1, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC634u, 0x2CC63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC63Cu;
label_2cc63c:
    // 0x2cc63c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CC63Cu;
    {
        const bool branch_taken_0x2cc63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC63Cu;
        // 0x2cc640: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc63c) {
            ctx->pc = 0x2CC6A0u;
            goto label_2cc6a0;
        }
    }
    ctx->pc = 0x2CC644u;
    // 0x2cc644: 0x0  nop
    ctx->pc = 0x2cc644u;
    // NOP
label_2cc648:
    // 0x2cc648: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2cc648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2cc64c: 0x24a543c8  addiu       $a1, $a1, 0x43C8
    ctx->pc = 0x2cc64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17352));
    // 0x2cc650: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2CC650u;
    SET_GPR_U32(ctx, 31, 0x2CC658u);
    ctx->pc = 0x2CC654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC650u;
    // 0x2cc654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2CC650u, 0x2CC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC658u;
label_2cc658:
    // 0x2cc658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc65c: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x2CC65Cu;
    SET_GPR_U32(ctx, 31, 0x2CC664u);
    ctx->pc = 0x2CC660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC65Cu;
    // 0x2cc660: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x2CC65Cu, 0x2CC664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC664u;
label_2cc664:
    // 0x2cc664: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2cc664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2cc668: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x2cc668u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2cc66c: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x2cc66cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2cc670: 0xf23823  subu        $a3, $a3, $s2
    ctx->pc = 0x2cc670u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2cc674: 0x1134023  subu        $t0, $t0, $s3
    ctx->pc = 0x2cc674u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x2cc678: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2cc678u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2cc67c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x2cc67cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2cc680: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2cc680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2cc684: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cc684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc688: 0x24e7002d  addiu       $a3, $a3, 0x2D
    ctx->pc = 0x2cc688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 45));
    // 0x2cc68c: 0x25080069  addiu       $t0, $t0, 0x69
    ctx->pc = 0x2cc68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 105));
    // 0x2cc690: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cc690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc694: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC694u;
    SET_GPR_U32(ctx, 31, 0x2CC69Cu);
    ctx->pc = 0x2CC698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC694u;
    // 0x2cc698: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC694u, 0x2CC69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC69Cu;
label_2cc69c:
    // 0x2cc69c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cc69cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cc6a0:
    // 0x2cc6a0: 0x2a42000e  slti        $v0, $s2, 0xE
    ctx->pc = 0x2cc6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2cc6a4: 0x1440ff8d  bnez        $v0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x2CC6A4u;
    {
        const bool branch_taken_0x2cc6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6A4u;
        // 0x2cc6a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6a4) {
            ctx->pc = 0x2CC4DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc4dc;
        }
    }
    ctx->pc = 0x2CC6ACu;
    // 0x2cc6ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2cc6acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2cc6b0: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x2cc6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cc6b4: 0x5440ff88  bnel        $v0, $zero, . + 4 + (-0x78 << 2)
    ctx->pc = 0x2CC6B4u;
    {
        const bool branch_taken_0x2cc6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc6b4) {
            ctx->pc = 0x2CC6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC6B4u;
            // 0x2cc6b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc4d8;
        }
    }
    ctx->pc = 0x2CC6BCu;
    // 0x2cc6bc: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cc6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc6c0: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2cc6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2cc6c4: 0x26e4e770  addiu       $a0, $s7, -0x1890
    ctx->pc = 0x2cc6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961008));
    // 0x2cc6c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc6cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cc6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc6d0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC6D0u;
    SET_GPR_U32(ctx, 31, 0x2CC6D8u);
    ctx->pc = 0x2CC6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6D0u;
    // 0x2cc6d4: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC6D0u, 0x2CC6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6D8u;
label_2cc6d8:
    // 0x2cc6d8: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cc6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cc6dc: 0x261043d0  addiu       $s0, $s0, 0x43D0
    ctx->pc = 0x2cc6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17360));
    // 0x2cc6e0: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cc6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cc6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc6e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cc6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cc6ec: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC6ECu;
    SET_GPR_U32(ctx, 31, 0x2CC6F4u);
    ctx->pc = 0x2CC6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6ECu;
    // 0x2cc6f0: 0x34c6000a  ori         $a2, $a2, 0xA (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC6ECu, 0x2CC6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6F4u;
label_2cc6f4:
    // 0x2cc6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc6f8: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cc6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cc6fc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cc6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cc700: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cc700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cc704: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC704u;
    SET_GPR_U32(ctx, 31, 0x2CC70Cu);
    ctx->pc = 0x2CC708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC704u;
    // 0x2cc708: 0x34c60017  ori         $a2, $a2, 0x17 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC704u, 0x2CC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC70Cu;
label_2cc70c:
    // 0x2cc70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc710: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cc710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cc714: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cc714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cc718: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cc718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cc71c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC71Cu;
    SET_GPR_U32(ctx, 31, 0x2CC724u);
    ctx->pc = 0x2CC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC71Cu;
    // 0x2cc720: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC71Cu, 0x2CC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC724u;
label_2cc724:
    // 0x2cc724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc728: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cc728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cc72c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cc730: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cc730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cc734: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC734u;
    SET_GPR_U32(ctx, 31, 0x2CC73Cu);
    ctx->pc = 0x2CC738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC734u;
    // 0x2cc738: 0x34c60019  ori         $a2, $a2, 0x19 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC734u, 0x2CC73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC73Cu;
label_2cc73c:
    // 0x2cc73c: 0xdfb00250  ld          $s0, 0x250($sp)
    ctx->pc = 0x2cc73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2cc740: 0xdfb10258  ld          $s1, 0x258($sp)
    ctx->pc = 0x2cc740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2cc744: 0xdfb20260  ld          $s2, 0x260($sp)
    ctx->pc = 0x2cc744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2cc748: 0xdfb30268  ld          $s3, 0x268($sp)
    ctx->pc = 0x2cc748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x2cc74c: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x2cc74cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2cc750: 0xdfb50278  ld          $s5, 0x278($sp)
    ctx->pc = 0x2cc750u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x2cc754: 0xdfb60280  ld          $s6, 0x280($sp)
    ctx->pc = 0x2cc754u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2cc758: 0xdfb70288  ld          $s7, 0x288($sp)
    ctx->pc = 0x2cc758u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x2cc75c: 0xdfbf0290  ld          $ra, 0x290($sp)
    ctx->pc = 0x2cc75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2cc760: 0xc7b502a0  lwc1        $f21, 0x2A0($sp)
    ctx->pc = 0x2cc760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cc764: 0xc7b40298  lwc1        $f20, 0x298($sp)
    ctx->pc = 0x2cc764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cc768: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC768u;
        // 0x2cc76c: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC770u;
}
