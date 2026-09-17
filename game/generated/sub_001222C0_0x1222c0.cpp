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

// Function: sub_001222C0
// Address: 0x1222c0 - 0x1224d0
void sub_001222C0_0x1222c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001222C0_0x1222c0");
#endif

    switch (ctx->pc) {
        case 0x1222c0u: goto label_1222c0;
        case 0x1222c4u: goto label_1222c4;
        case 0x1222c8u: goto label_1222c8;
        case 0x1222ccu: goto label_1222cc;
        case 0x1222d0u: goto label_1222d0;
        case 0x1222d4u: goto label_1222d4;
        case 0x1222d8u: goto label_1222d8;
        case 0x1222dcu: goto label_1222dc;
        case 0x1222e0u: goto label_1222e0;
        case 0x1222e4u: goto label_1222e4;
        case 0x1222e8u: goto label_1222e8;
        case 0x1222ecu: goto label_1222ec;
        case 0x1222f0u: goto label_1222f0;
        case 0x1222f4u: goto label_1222f4;
        case 0x1222f8u: goto label_1222f8;
        case 0x1222fcu: goto label_1222fc;
        case 0x122300u: goto label_122300;
        case 0x122304u: goto label_122304;
        case 0x122308u: goto label_122308;
        case 0x12230cu: goto label_12230c;
        case 0x122310u: goto label_122310;
        case 0x122314u: goto label_122314;
        case 0x122318u: goto label_122318;
        case 0x12231cu: goto label_12231c;
        case 0x122320u: goto label_122320;
        case 0x122324u: goto label_122324;
        case 0x122328u: goto label_122328;
        case 0x12232cu: goto label_12232c;
        case 0x122330u: goto label_122330;
        case 0x122334u: goto label_122334;
        case 0x122338u: goto label_122338;
        case 0x12233cu: goto label_12233c;
        case 0x122340u: goto label_122340;
        case 0x122344u: goto label_122344;
        case 0x122348u: goto label_122348;
        case 0x12234cu: goto label_12234c;
        case 0x122350u: goto label_122350;
        case 0x122354u: goto label_122354;
        case 0x122358u: goto label_122358;
        case 0x12235cu: goto label_12235c;
        case 0x122360u: goto label_122360;
        case 0x122364u: goto label_122364;
        case 0x122368u: goto label_122368;
        case 0x12236cu: goto label_12236c;
        case 0x122370u: goto label_122370;
        case 0x122374u: goto label_122374;
        case 0x122378u: goto label_122378;
        case 0x12237cu: goto label_12237c;
        case 0x122380u: goto label_122380;
        case 0x122384u: goto label_122384;
        case 0x122388u: goto label_122388;
        case 0x12238cu: goto label_12238c;
        case 0x122390u: goto label_122390;
        case 0x122394u: goto label_122394;
        case 0x122398u: goto label_122398;
        case 0x12239cu: goto label_12239c;
        case 0x1223a0u: goto label_1223a0;
        case 0x1223a4u: goto label_1223a4;
        case 0x1223a8u: goto label_1223a8;
        case 0x1223acu: goto label_1223ac;
        case 0x1223b0u: goto label_1223b0;
        case 0x1223b4u: goto label_1223b4;
        case 0x1223b8u: goto label_1223b8;
        case 0x1223bcu: goto label_1223bc;
        case 0x1223c0u: goto label_1223c0;
        case 0x1223c4u: goto label_1223c4;
        case 0x1223c8u: goto label_1223c8;
        case 0x1223ccu: goto label_1223cc;
        case 0x1223d0u: goto label_1223d0;
        case 0x1223d4u: goto label_1223d4;
        case 0x1223d8u: goto label_1223d8;
        case 0x1223dcu: goto label_1223dc;
        case 0x1223e0u: goto label_1223e0;
        case 0x1223e4u: goto label_1223e4;
        case 0x1223e8u: goto label_1223e8;
        case 0x1223ecu: goto label_1223ec;
        case 0x1223f0u: goto label_1223f0;
        case 0x1223f4u: goto label_1223f4;
        case 0x1223f8u: goto label_1223f8;
        case 0x1223fcu: goto label_1223fc;
        case 0x122400u: goto label_122400;
        case 0x122404u: goto label_122404;
        case 0x122408u: goto label_122408;
        case 0x12240cu: goto label_12240c;
        case 0x122410u: goto label_122410;
        case 0x122414u: goto label_122414;
        case 0x122418u: goto label_122418;
        case 0x12241cu: goto label_12241c;
        case 0x122420u: goto label_122420;
        case 0x122424u: goto label_122424;
        case 0x122428u: goto label_122428;
        case 0x12242cu: goto label_12242c;
        case 0x122430u: goto label_122430;
        case 0x122434u: goto label_122434;
        case 0x122438u: goto label_122438;
        case 0x12243cu: goto label_12243c;
        case 0x122440u: goto label_122440;
        case 0x122444u: goto label_122444;
        case 0x122448u: goto label_122448;
        case 0x12244cu: goto label_12244c;
        case 0x122450u: goto label_122450;
        case 0x122454u: goto label_122454;
        case 0x122458u: goto label_122458;
        case 0x12245cu: goto label_12245c;
        case 0x122460u: goto label_122460;
        case 0x122464u: goto label_122464;
        case 0x122468u: goto label_122468;
        case 0x12246cu: goto label_12246c;
        case 0x122470u: goto label_122470;
        case 0x122474u: goto label_122474;
        case 0x122478u: goto label_122478;
        case 0x12247cu: goto label_12247c;
        case 0x122480u: goto label_122480;
        case 0x122484u: goto label_122484;
        case 0x122488u: goto label_122488;
        case 0x12248cu: goto label_12248c;
        case 0x122490u: goto label_122490;
        case 0x122494u: goto label_122494;
        case 0x122498u: goto label_122498;
        case 0x12249cu: goto label_12249c;
        case 0x1224a0u: goto label_1224a0;
        case 0x1224a4u: goto label_1224a4;
        case 0x1224a8u: goto label_1224a8;
        case 0x1224acu: goto label_1224ac;
        case 0x1224b0u: goto label_1224b0;
        case 0x1224b4u: goto label_1224b4;
        case 0x1224b8u: goto label_1224b8;
        case 0x1224bcu: goto label_1224bc;
        case 0x1224c0u: goto label_1224c0;
        case 0x1224c4u: goto label_1224c4;
        case 0x1224c8u: goto label_1224c8;
        case 0x1224ccu: goto label_1224cc;
        default: break;
    }

    ctx->pc = 0x1222c0u;

label_1222c0:
    // 0x1222c0: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x1222c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_1222c4:
    // 0x1222c4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1222c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_1222c8:
    // 0x1222c8: 0x7fbe06d0  sq          $fp, 0x6D0($sp)
    ctx->pc = 0x1222c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 30));
label_1222cc:
    // 0x1222cc: 0x7fb00650  sq          $s0, 0x650($sp)
    ctx->pc = 0x1222ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 16));
label_1222d0:
    // 0x1222d0: 0x7fb10660  sq          $s1, 0x660($sp)
    ctx->pc = 0x1222d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 17));
label_1222d4:
    // 0x1222d4: 0x7fb20670  sq          $s2, 0x670($sp)
    ctx->pc = 0x1222d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 18));
label_1222d8:
    // 0x1222d8: 0x7fb30680  sq          $s3, 0x680($sp)
    ctx->pc = 0x1222d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 19));
label_1222dc:
    // 0x1222dc: 0x7fb40690  sq          $s4, 0x690($sp)
    ctx->pc = 0x1222dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 20));
label_1222e0:
    // 0x1222e0: 0x7fb506a0  sq          $s5, 0x6A0($sp)
    ctx->pc = 0x1222e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), GPR_VEC(ctx, 21));
label_1222e4:
    // 0x1222e4: 0x7fb606b0  sq          $s6, 0x6B0($sp)
    ctx->pc = 0x1222e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 22));
label_1222e8:
    // 0x1222e8: 0x7fb706c0  sq          $s7, 0x6C0($sp)
    ctx->pc = 0x1222e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 23));
label_1222ec:
    // 0x1222ec: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x1222ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_1222f0:
    // 0x1222f0: 0xe7bf0740  swc1        $f31, 0x740($sp)
    ctx->pc = 0x1222f0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_1222f4:
    // 0x1222f4: 0xe7be0738  swc1        $f30, 0x738($sp)
    ctx->pc = 0x1222f4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_1222f8:
    // 0x1222f8: 0xe7bd0730  swc1        $f29, 0x730($sp)
    ctx->pc = 0x1222f8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_1222fc:
    // 0x1222fc: 0xe7bc0728  swc1        $f28, 0x728($sp)
    ctx->pc = 0x1222fcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_122300:
    // 0x122300: 0xe7bb0720  swc1        $f27, 0x720($sp)
    ctx->pc = 0x122300u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_122304:
    // 0x122304: 0xe7ba0718  swc1        $f26, 0x718($sp)
    ctx->pc = 0x122304u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_122308:
    // 0x122308: 0xe7b90710  swc1        $f25, 0x710($sp)
    ctx->pc = 0x122308u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_12230c:
    // 0x12230c: 0xe7b80708  swc1        $f24, 0x708($sp)
    ctx->pc = 0x12230cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_122310:
    // 0x122310: 0xe7b70700  swc1        $f23, 0x700($sp)
    ctx->pc = 0x122310u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_122314:
    // 0x122314: 0xe7b606f8  swc1        $f22, 0x6F8($sp)
    ctx->pc = 0x122314u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_122318:
    // 0x122318: 0xe7b506f0  swc1        $f21, 0x6F0($sp)
    ctx->pc = 0x122318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_12231c:
    // 0x12231c: 0xe7b406e8  swc1        $f20, 0x6E8($sp)
    ctx->pc = 0x12231cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_122320:
    // 0x122320: 0x8c624380  lw          $v0, 0x4380($v1)
    ctx->pc = 0x122320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17280)));
label_122324:
    // 0x122324: 0x40f809  jalr        $v0
label_122328:
    if (ctx->pc == 0x122328u) {
        ctx->pc = 0x122328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122324u;
        // 0x122328: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12232Cu;
        goto label_12232c;
    }
    ctx->pc = 0x122324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12232Cu);
        ctx->pc = 0x122328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122324u;
        // 0x122328: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122324u, 0x12232Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12232Cu;
label_12232c:
    // 0x12232c: 0xafc20640  sw          $v0, 0x640($fp)
    ctx->pc = 0x12232cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1600), GPR_U32(ctx, 2));
label_122330:
    // 0x122330: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x122330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_122334:
    // 0x122334: 0xafc20644  sw          $v0, 0x644($fp)
    ctx->pc = 0x122334u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1604), GPR_U32(ctx, 2));
label_122338:
    // 0x122338: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x122338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12233c:
    // 0x12233c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x12233cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_122340:
    // 0x122340: 0xafc40648  sw          $a0, 0x648($fp)
    ctx->pc = 0x122340u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1608), GPR_U32(ctx, 4));
label_122344:
    // 0x122344: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x122344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_122348:
    // 0x122348: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_12234c:
    if (ctx->pc == 0x12234Cu) {
        ctx->pc = 0x12234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122348u;
        // 0x12234c: 0x3c020012  lui         $v0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122350u;
        goto label_122350;
    }
    ctx->pc = 0x122348u;
    {
        const bool branch_taken_0x122348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122348u;
        // 0x12234c: 0x3c020012  lui         $v0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122348) {
            ctx->pc = 0x1223D8u;
            goto label_1223d8;
        }
    }
    ctx->pc = 0x122350u;
label_122350:
    // 0x122350: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x122350u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_122354:
    // 0x122354: 0x24422370  addiu       $v0, $v0, 0x2370
    ctx->pc = 0x122354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9072));
label_122358:
    // 0x122358: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x122358u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_12235c:
    // 0x12235c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x12235cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_122360:
    // 0x122360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122364:
    // 0x122364: 0xafde0008  sw          $fp, 0x8($fp)
    ctx->pc = 0x122364u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 30));
label_122368:
    // 0x122368: 0x10000002  b           . + 4 + (0x2 << 2)
label_12236c:
    if (ctx->pc == 0x12236Cu) {
        ctx->pc = 0x12236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122368u;
        // 0x12236c: 0xafdd0010  sw          $sp, 0x10($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122370u;
        goto label_122370;
    }
    ctx->pc = 0x122368u;
    {
        const bool branch_taken_0x122368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122368u;
        // 0x12236c: 0xafdd0010  sw          $sp, 0x10($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122368) {
            ctx->pc = 0x122374u;
            goto label_122374;
        }
    }
    ctx->pc = 0x122370u;
label_122370:
    // 0x122370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122374:
    // 0x122374: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_122378:
    if (ctx->pc == 0x122378u) {
        ctx->pc = 0x122378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122374u;
        // 0x122378: 0x8fc60644  lw          $a2, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12237Cu;
        goto label_12237c;
    }
    ctx->pc = 0x122374u;
    {
        const bool branch_taken_0x122374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122374u;
        // 0x122378: 0x8fc60644  lw          $a2, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122374) {
            ctx->pc = 0x1223D0u;
            goto label_1223d0;
        }
    }
    ctx->pc = 0x12237Cu;
label_12237c:
    // 0x12237c: 0xacde0000  sw          $fp, 0x0($a2)
    ctx->pc = 0x12237cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 30));
label_122380:
    // 0x122380: 0x8fc20648  lw          $v0, 0x648($fp)
    ctx->pc = 0x122380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_122384:
    // 0x122384: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x122384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122388:
    // 0x122388: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_12238c:
    if (ctx->pc == 0x12238Cu) {
        ctx->pc = 0x12238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122388u;
        // 0x12238c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122390u;
        goto label_122390;
    }
    ctx->pc = 0x122388u;
    {
        const bool branch_taken_0x122388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122388u;
        // 0x12238c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122388) {
            ctx->pc = 0x1223C0u;
            goto label_1223c0;
        }
    }
    ctx->pc = 0x122390u;
label_122390:
    // 0x122390: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_122394:
    // 0x122394: 0x8fc60648  lw          $a2, 0x648($fp)
    ctx->pc = 0x122394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_122398:
    // 0x122398: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x122398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_12239c:
    // 0x12239c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x12239cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1223a0:
    // 0x1223a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1223a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1223a4:
    // 0x1223a4: 0x60f809  jalr        $v1
label_1223a8:
    if (ctx->pc == 0x1223A8u) {
        ctx->pc = 0x1223A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223A4u;
        // 0x1223a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223ACu;
        goto label_1223ac;
    }
    ctx->pc = 0x1223A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1223ACu);
        ctx->pc = 0x1223A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223A4u;
        // 0x1223a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1223A4u, 0x1223ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1223ACu;
label_1223ac:
    // 0x1223ac: 0x8fc30648  lw          $v1, 0x648($fp)
    ctx->pc = 0x1223acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_1223b0:
    // 0x1223b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1223b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1223b4:
    // 0x1223b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1223b8:
    if (ctx->pc == 0x1223B8u) {
        ctx->pc = 0x1223B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223B4u;
        // 0x1223b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223BCu;
        goto label_1223bc;
    }
    ctx->pc = 0x1223B4u;
    {
        const bool branch_taken_0x1223b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1223B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223B4u;
        // 0x1223b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223b4) {
            ctx->pc = 0x122390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122390;
        }
    }
    ctx->pc = 0x1223BCu;
label_1223bc:
    // 0x1223bc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1223bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1223c0:
    // 0x1223c0: 0x8fc40644  lw          $a0, 0x644($fp)
    ctx->pc = 0x1223c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_1223c4:
    // 0x1223c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1223c8:
    if (ctx->pc == 0x1223C8u) {
        ctx->pc = 0x1223C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223C4u;
        // 0x1223c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223CCu;
        goto label_1223cc;
    }
    ctx->pc = 0x1223C4u;
    {
        const bool branch_taken_0x1223c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223C4u;
        // 0x1223c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223c4) {
            ctx->pc = 0x1223D8u;
            goto label_1223d8;
        }
    }
    ctx->pc = 0x1223CCu;
label_1223cc:
    // 0x1223cc: 0x0  nop
    ctx->pc = 0x1223ccu;
    // NOP
label_1223d0:
    // 0x1223d0: 0xc048724  jal         func_121C90
label_1223d4:
    if (ctx->pc == 0x1223D4u) {
        ctx->pc = 0x1223D8u;
        goto label_1223d8;
    }
    ctx->pc = 0x1223D0u;
    SET_GPR_U32(ctx, 31, 0x1223D8u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x1223D0u, 0x1223D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223D8u;
label_1223d8:
    // 0x1223d8: 0x8fc60640  lw          $a2, 0x640($fp)
    ctx->pc = 0x1223d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1600)));
label_1223dc:
    // 0x1223dc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1223dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1223e0:
    // 0x1223e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1223e4:
    if (ctx->pc == 0x1223E4u) {
        ctx->pc = 0x1223E8u;
        goto label_1223e8;
    }
    ctx->pc = 0x1223E0u;
    {
        const bool branch_taken_0x1223e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1223e0) {
            ctx->pc = 0x1223FCu;
            goto label_1223fc;
        }
    }
    ctx->pc = 0x1223E8u;
label_1223e8:
    // 0x1223e8: 0x8fc30644  lw          $v1, 0x644($fp)
    ctx->pc = 0x1223e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_1223ec:
    // 0x1223ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1223ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1223f0:
    // 0x1223f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1223f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1223f4:
    // 0x1223f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1223f8:
    if (ctx->pc == 0x1223F8u) {
        ctx->pc = 0x1223F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223F4u;
        // 0x1223f8: 0x8fc40644  lw          $a0, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223FCu;
        goto label_1223fc;
    }
    ctx->pc = 0x1223F4u;
    {
        const bool branch_taken_0x1223f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1223F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223F4u;
        // 0x1223f8: 0x8fc40644  lw          $a0, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223f4) {
            ctx->pc = 0x122408u;
            goto label_122408;
        }
    }
    ctx->pc = 0x1223FCu;
label_1223fc:
    // 0x1223fc: 0xc048724  jal         func_121C90
label_122400:
    if (ctx->pc == 0x122400u) {
        ctx->pc = 0x122404u;
        goto label_122404;
    }
    ctx->pc = 0x1223FCu;
    SET_GPR_U32(ctx, 31, 0x122404u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x1223FCu, 0x122404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122404u;
label_122404:
    // 0x122404: 0x0  nop
    ctx->pc = 0x122404u;
    // NOP
label_122408:
    // 0x122408: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x122408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_12240c:
    // 0x12240c: 0x8c5d0008  lw          $sp, 0x8($v0)
    ctx->pc = 0x12240cu;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_122410:
    // 0x122410: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x122410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_122414:
    // 0x122414: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x122414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_122418:
    // 0x122418: 0x600008  jr          $v1
label_12241c:
    if (ctx->pc == 0x12241Cu) {
        ctx->pc = 0x12241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122418u;
        // 0x12241c: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122420u;
        goto label_122420;
    }
    ctx->pc = 0x122418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x12241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122418u;
        // 0x12241c: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122418u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x122420u;
label_122420:
    // 0x122420: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x122420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_122424:
    // 0x122424: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x122424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_122428:
    // 0x122428: 0x7fb00650  sq          $s0, 0x650($sp)
    ctx->pc = 0x122428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 16));
label_12242c:
    // 0x12242c: 0x7fb10660  sq          $s1, 0x660($sp)
    ctx->pc = 0x12242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 17));
label_122430:
    // 0x122430: 0x7fb20670  sq          $s2, 0x670($sp)
    ctx->pc = 0x122430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 18));
label_122434:
    // 0x122434: 0x7fb30680  sq          $s3, 0x680($sp)
    ctx->pc = 0x122434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 19));
label_122438:
    // 0x122438: 0x7fb40690  sq          $s4, 0x690($sp)
    ctx->pc = 0x122438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 20));
label_12243c:
    // 0x12243c: 0x7fb506a0  sq          $s5, 0x6A0($sp)
    ctx->pc = 0x12243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), GPR_VEC(ctx, 21));
label_122440:
    // 0x122440: 0x7fb606b0  sq          $s6, 0x6B0($sp)
    ctx->pc = 0x122440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 22));
label_122444:
    // 0x122444: 0x7fb706c0  sq          $s7, 0x6C0($sp)
    ctx->pc = 0x122444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 23));
label_122448:
    // 0x122448: 0x7fbe06d0  sq          $fp, 0x6D0($sp)
    ctx->pc = 0x122448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 30));
label_12244c:
    // 0x12244c: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x12244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_122450:
    // 0x122450: 0xe7bf0740  swc1        $f31, 0x740($sp)
    ctx->pc = 0x122450u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_122454:
    // 0x122454: 0xe7be0738  swc1        $f30, 0x738($sp)
    ctx->pc = 0x122454u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_122458:
    // 0x122458: 0xe7bd0730  swc1        $f29, 0x730($sp)
    ctx->pc = 0x122458u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_12245c:
    // 0x12245c: 0xe7bc0728  swc1        $f28, 0x728($sp)
    ctx->pc = 0x12245cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_122460:
    // 0x122460: 0xe7bb0720  swc1        $f27, 0x720($sp)
    ctx->pc = 0x122460u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_122464:
    // 0x122464: 0xe7ba0718  swc1        $f26, 0x718($sp)
    ctx->pc = 0x122464u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_122468:
    // 0x122468: 0xe7b90710  swc1        $f25, 0x710($sp)
    ctx->pc = 0x122468u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_12246c:
    // 0x12246c: 0xe7b80708  swc1        $f24, 0x708($sp)
    ctx->pc = 0x12246cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_122470:
    // 0x122470: 0xe7b70700  swc1        $f23, 0x700($sp)
    ctx->pc = 0x122470u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_122474:
    // 0x122474: 0xe7b606f8  swc1        $f22, 0x6F8($sp)
    ctx->pc = 0x122474u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_122478:
    // 0x122478: 0xe7b506f0  swc1        $f21, 0x6F0($sp)
    ctx->pc = 0x122478u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_12247c:
    // 0x12247c: 0xe7b406e8  swc1        $f20, 0x6E8($sp)
    ctx->pc = 0x12247cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_122480:
    // 0x122480: 0x8c624380  lw          $v0, 0x4380($v1)
    ctx->pc = 0x122480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17280)));
label_122484:
    // 0x122484: 0x40f809  jalr        $v0
label_122488:
    if (ctx->pc == 0x122488u) {
        ctx->pc = 0x12248Cu;
        goto label_12248c;
    }
    ctx->pc = 0x122484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12248Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122484u, 0x12248Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12248Cu;
label_12248c:
    // 0x12248c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_122490:
    // 0x122490: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x122490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_122494:
    // 0x122494: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x122494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122498:
    // 0x122498: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x122498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_12249c:
    // 0x12249c: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x12249cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_1224a0:
    // 0x1224a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1224a4:
    // 0x1224a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1224a8:
    if (ctx->pc == 0x1224A8u) {
        ctx->pc = 0x1224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224A4u;
        // 0x1224a8: 0x3c020012  lui         $v0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1224ACu;
        goto label_1224ac;
    }
    ctx->pc = 0x1224A4u;
    {
        const bool branch_taken_0x1224a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224A4u;
        // 0x1224a8: 0x3c020012  lui         $v0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224a4) {
            ctx->pc = 0x122538u;
            return;
        }
    }
    ctx->pc = 0x1224ACu;
label_1224ac:
    // 0x1224ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1224acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1224b0:
    // 0x1224b0: 0x244224d0  addiu       $v0, $v0, 0x24D0
    ctx->pc = 0x1224b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9424));
label_1224b4:
    // 0x1224b4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1224b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1224b8:
    // 0x1224b8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1224b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_1224bc:
    // 0x1224bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1224bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1224c0:
    // 0x1224c0: 0xafbd0008  sw          $sp, 0x8($sp)
    ctx->pc = 0x1224c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 29));
label_1224c4:
    // 0x1224c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1224c8:
    if (ctx->pc == 0x1224C8u) {
        ctx->pc = 0x1224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224C4u;
        // 0x1224c8: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1224CCu;
        goto label_1224cc;
    }
    ctx->pc = 0x1224C4u;
    {
        const bool branch_taken_0x1224c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224C4u;
        // 0x1224c8: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224c4) {
            ctx->pc = 0x1224D4u;
            return;
        }
    }
    ctx->pc = 0x1224CCu;
label_1224cc:
    // 0x1224cc: 0x0  nop
    ctx->pc = 0x1224ccu;
    // NOP
    ctx->pc = 0x1224d0u;
}
