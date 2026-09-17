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

// Function: sub_0011F150
// Address: 0x11f150 - 0x11f9b8
void sub_0011F150_0x11f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F150_0x11f150");
#endif

    switch (ctx->pc) {
        case 0x11f1e8u: goto label_11f1e8;
        case 0x11f228u: goto label_11f228;
        case 0x11f248u: goto label_11f248;
        case 0x11f284u: goto label_11f284;
        case 0x11f2b8u: goto label_11f2b8;
        case 0x11f300u: goto label_11f300;
        case 0x11f318u: goto label_11f318;
        case 0x11f3c8u: goto label_11f3c8;
        case 0x11f46cu: goto label_11f46c;
        case 0x11f498u: goto label_11f498;
        case 0x11f4e0u: goto label_11f4e0;
        case 0x11f548u: goto label_11f548;
        case 0x11f570u: goto label_11f570;
        case 0x11f5e8u: goto label_11f5e8;
        case 0x11f618u: goto label_11f618;
        case 0x11f698u: goto label_11f698;
        case 0x11f6b8u: goto label_11f6b8;
        case 0x11f700u: goto label_11f700;
        case 0x11f728u: goto label_11f728;
        case 0x11f7d0u: goto label_11f7d0;
        case 0x11f818u: goto label_11f818;
        case 0x11f858u: goto label_11f858;
        case 0x11f8a0u: goto label_11f8a0;
        case 0x11f8e8u: goto label_11f8e8;
        case 0x11f930u: goto label_11f930;
        default: break;
    }

    ctx->pc = 0x11f150u;

    // 0x11f150: 0x24c2fffd  addiu       $v0, $a2, -0x3
    ctx->pc = 0x11f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x11f154: 0x24ca0004  addiu       $t2, $a2, 0x4
    ctx->pc = 0x11f154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11f158: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x11f158u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11f15c: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x11f15cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x11f160: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x11f160u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x11f164: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x11f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x11f168: 0x2b8c3  sra         $s7, $v0, 3
    ctx->pc = 0x11f168u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 3));
    // 0x11f16c: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x11f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x11f170: 0x2ae20000  slti        $v0, $s7, 0x0
    ctx->pc = 0x11f170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11f174: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x11f174u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11f178: 0x2b80b  movn        $s7, $zero, $v0
    ctx->pc = 0x11f178u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    // 0x11f17c: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x11f17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x11f180: 0x3c140015  lui         $s4, 0x15
    ctx->pc = 0x11f180u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)21 << 16));
    // 0x11f184: 0x288a021  addu        $s4, $s4, $t0
    ctx->pc = 0x11f184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x11f188: 0x8e94ed48  lw          $s4, -0x12B8($s4)
    ctx->pc = 0x11f188u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962504)));
    // 0x11f18c: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x11f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x11f190: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x11f190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x11f194: 0x24f2ffff  addiu       $s2, $a3, -0x1
    ctx->pc = 0x11f194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11f198: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x11f198u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11f19c: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x11f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x11f1a0: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x11f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x11f1a4: 0x24d1fff8  addiu       $s1, $a2, -0x8
    ctx->pc = 0x11f1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x11f1a8: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x11f1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x11f1ac: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x11f1acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1b0: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x11f1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x11f1b4: 0x2f22823  subu        $a1, $s7, $s2
    ctx->pc = 0x11f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x11f1b8: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x11f1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x11f1bc: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x11f1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x11f1c0: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x11f1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x11f1c4: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x11f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x11f1c8: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x11f1c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x11f1cc: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x11f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x11f1d0: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x11F1D0u;
    {
        const bool branch_taken_0x11f1d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x11F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1D0u;
        // 0x11f1d4: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1d0) {
            ctx->pc = 0x11F210u;
            goto label_11f210;
        }
    }
    ctx->pc = 0x11F1D8u;
    // 0x11f1d8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11f1dc: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x11f1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11f1e0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x11f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11f1e4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x11f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11f1e8:
    // 0x11f1e8: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F1E8u;
    {
        const bool branch_taken_0x11f1e8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x11f1e8) {
            ctx->pc = 0x11F1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F1E8u;
            // 0x11f1ec: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F1FCu;
            goto label_11f1fc;
        }
    }
    ctx->pc = 0x11F1F0u;
    // 0x11f1f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11f1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f1f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11f1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11f1f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x11f1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_11f1fc:
    // 0x11f1fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f200: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x11f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x11f204: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x11f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11f208: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11F208u;
    {
        const bool branch_taken_0x11f208 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F208u;
        // 0x11f20c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f208) {
            ctx->pc = 0x11F1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f1e8;
        }
    }
    ctx->pc = 0x11F210u;
label_11f210:
    // 0x11f210: 0x680001b  bltz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x11F210u;
    {
        const bool branch_taken_0x11f210 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x11F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F210u;
        // 0x11f214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f210) {
            ctx->pc = 0x11F280u;
            goto label_11f280;
        }
    }
    ctx->pc = 0x11F218u;
    // 0x11f218: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x11f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11f21c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11f21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f220: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11f220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f224: 0x0  nop
    ctx->pc = 0x11f224u;
    // NOP
label_11f228:
    // 0x11f228: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11f228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f22c: 0x642000f  bltzl       $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x11F22Cu;
    {
        const bool branch_taken_0x11f22c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x11f22c) {
            ctx->pc = 0x11F230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F22Cu;
            // 0x11f230: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F26Cu;
            goto label_11f26c;
        }
    }
    ctx->pc = 0x11F234u;
    // 0x11f234: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x11f234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11f238: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11f238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11f23c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x11f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11f240: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f244: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x11f244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_11f248:
    // 0x11f248: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11f248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f24c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x11f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x11f250: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f254: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x11f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x11f258: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11f258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11f25c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f25cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f260: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11F260u;
    {
        const bool branch_taken_0x11f260 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F260u;
        // 0x11f264: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f260) {
            ctx->pc = 0x11F248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f248;
        }
    }
    ctx->pc = 0x11F268u;
    // 0x11f268: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11f268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11f26c:
    // 0x11f26c: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x11f26cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x11f270: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x11f270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11f274: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11f274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11f278: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11F278u;
    {
        const bool branch_taken_0x11f278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F278u;
        // 0x11f27c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f278) {
            ctx->pc = 0x11F228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F280u;
label_11f280:
    // 0x11f280: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x11f280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11f284:
    // 0x11f284: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x11f284u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11f288: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x11f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11f28c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x11f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x11f290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f294: 0x1a000017  blez        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11F294u;
    {
        const bool branch_taken_0x11f294 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F294u;
        // 0x11f298: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f294) {
            ctx->pc = 0x11F2F4u;
            goto label_11f2f4;
        }
    }
    ctx->pc = 0x11F29Cu;
    // 0x11f29c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x11f29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x11f2a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11f2a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11f2a4: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x11f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x11f2a8: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x11f2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x11f2ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11f2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11f2b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2b4: 0x0  nop
    ctx->pc = 0x11f2b4u;
    // NOP
label_11f2b8:
    // 0x11f2b8: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x11f2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x11f2bc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x11f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f2c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11f2c4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x11f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x11f2c8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f2c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11f2cc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11f2ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11f2d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11f2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f2d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11f2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11f2d8: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x11f2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11f2dc: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11f2dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11f2e0: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x11f2e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11f2e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f2e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11f2e8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x11f2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x11f2ec: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11F2ECu;
    {
        const bool branch_taken_0x11f2ec = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2ECu;
        // 0x11f2f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2ec) {
            ctx->pc = 0x11F2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f2b8;
        }
    }
    ctx->pc = 0x11F2F4u;
label_11f2f4:
    // 0x11f2f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f2f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11f2f8: 0xc047f88  jal         func_11FE20
    ctx->pc = 0x11F2F8u;
    SET_GPR_U32(ctx, 31, 0x11F300u);
    ctx->pc = 0x11F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2F8u;
    // 0x11f2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE20u, 0x11F2F8u, 0x11F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F300u;
label_11f300:
    // 0x11f300: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x11f300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x11f304: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11f304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11f308: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11f308u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11f30c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x11f30cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f310: 0xc047f52  jal         func_11FD48
    ctx->pc = 0x11F310u;
    SET_GPR_U32(ctx, 31, 0x11F318u);
    ctx->pc = 0x11F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F310u;
    // 0x11f314: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD48u, 0x11F310u, 0x11F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F318u;
label_11f318:
    // 0x11f318: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x11f318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x11f31c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f320: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f324: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11f324u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11f328: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f328u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11f32c: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x11f32cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x11f330: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x11f330u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f334: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11f334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11f338: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x11F338u;
    {
        const bool branch_taken_0x11f338 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x11F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F338u;
        // 0x11f33c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f338) {
            ctx->pc = 0x11F378u;
            goto label_11f378;
        }
    }
    ctx->pc = 0x11F340u;
    // 0x11f340: 0x2663fffc  addiu       $v1, $s3, -0x4
    ctx->pc = 0x11f340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x11f344: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11f348: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x11f348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x11f34c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x11f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11f350: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11f354: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x11f354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11f358: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x11f358u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x11f35c: 0x433007  srav        $a2, $v1, $v0
    ctx->pc = 0x11f35cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x11f360: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x11f360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x11f364: 0x2a6a821  addu        $s5, $s5, $a2
    ctx->pc = 0x11f364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x11f368: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11f368u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f36c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x11f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x11f370: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11F370u;
    {
        const bool branch_taken_0x11f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F370u;
        // 0x11f374: 0x83b007  srav        $s6, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f370) {
            ctx->pc = 0x11F3A4u;
            goto label_11f3a4;
        }
    }
    ctx->pc = 0x11F378u;
label_11f378:
    // 0x11f378: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F378u;
    {
        const bool branch_taken_0x11f378 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F378u;
        // 0x11f37c: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f378) {
            ctx->pc = 0x11F390u;
            goto label_11f390;
        }
    }
    ctx->pc = 0x11F380u;
    // 0x11f380: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x11f380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x11f384: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11F384u;
    {
        const bool branch_taken_0x11f384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F384u;
        // 0x11f388: 0x3b203  sra         $s6, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f384) {
            ctx->pc = 0x11F3A4u;
            goto label_11f3a4;
        }
    }
    ctx->pc = 0x11F38Cu;
    // 0x11f38c: 0x0  nop
    ctx->pc = 0x11f38cu;
    // NOP
label_11f390:
    // 0x11f390: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11f390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11f394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f398: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x11f398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f39c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11F39Cu;
    {
        const bool branch_taken_0x11f39c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11f39c) {
            ctx->pc = 0x11F3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F39Cu;
            // 0x11f3a0: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F3A4u;
            goto label_11f3a4;
        }
    }
    ctx->pc = 0x11F3A4u;
label_11f3a4:
    // 0x11f3a4: 0x1ac00032  blez        $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x11F3A4u;
    {
        const bool branch_taken_0x11f3a4 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x11f3a4) {
            ctx->pc = 0x11F470u;
            goto label_11f470;
        }
    }
    ctx->pc = 0x11F3ACu;
    // 0x11f3ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x11f3acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x11f3b0: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11F3B0u;
    {
        const bool branch_taken_0x11f3b0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3B0u;
        // 0x11f3b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3b0) {
            ctx->pc = 0x11F3FCu;
            goto label_11f3fc;
        }
    }
    ctx->pc = 0x11F3B8u;
    // 0x11f3b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x11f3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11f3bc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x11f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11f3c0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x11f3c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11f3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f3c8:
    // 0x11f3c8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F3C8u;
    {
        const bool branch_taken_0x11f3c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3C8u;
        // 0x11f3cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3c8) {
            ctx->pc = 0x11F3E0u;
            goto label_11f3e0;
        }
    }
    ctx->pc = 0x11F3D0u;
    // 0x11f3d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F3D0u;
    {
        const bool branch_taken_0x11f3d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3D0u;
        // 0x11f3d4: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3d0) {
            ctx->pc = 0x11F3E8u;
            goto label_11f3e8;
        }
    }
    ctx->pc = 0x11F3D8u;
    // 0x11f3d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F3D8u;
    {
        const bool branch_taken_0x11f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3D8u;
        // 0x11f3dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3d8) {
            ctx->pc = 0x11F3E4u;
            goto label_11f3e4;
        }
    }
    ctx->pc = 0x11F3E0u;
label_11f3e0:
    // 0x11f3e0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x11f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_11f3e4:
    // 0x11f3e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_11f3e8:
    // 0x11f3e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f3ec: 0x0  nop
    ctx->pc = 0x11f3ecu;
    // NOP
    // 0x11f3f0: 0x0  nop
    ctx->pc = 0x11f3f0u;
    // NOP
    // 0x11f3f4: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x11F3F4u;
    {
        const bool branch_taken_0x11f3f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3F4u;
        // 0x11f3f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3f4) {
            ctx->pc = 0x11F3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f3c8;
        }
    }
    ctx->pc = 0x11F3FCu;
label_11f3fc:
    // 0x11f3fc: 0x1a200013  blez        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x11F3FCu;
    {
        const bool branch_taken_0x11f3fc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x11F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3FCu;
        // 0x11f400: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3fc) {
            ctx->pc = 0x11F44Cu;
            goto label_11f44c;
        }
    }
    ctx->pc = 0x11F404u;
    // 0x11f404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f408: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F408u;
    {
        const bool branch_taken_0x11f408 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F408u;
        // 0x11f40c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f408) {
            ctx->pc = 0x11F420u;
            goto label_11f420;
        }
    }
    ctx->pc = 0x11F410u;
    // 0x11f410: 0x52220009  beql        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F410u;
    {
        const bool branch_taken_0x11f410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f410) {
            ctx->pc = 0x11F414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F410u;
            // 0x11f414: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F438u;
            goto label_11f438;
        }
    }
    ctx->pc = 0x11F418u;
    // 0x11f418: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11F418u;
    {
        const bool branch_taken_0x11f418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f418) {
            ctx->pc = 0x11F44Cu;
            goto label_11f44c;
        }
    }
    ctx->pc = 0x11F420u;
label_11f420:
    // 0x11f420: 0x2662fffc  addiu       $v0, $s3, -0x4
    ctx->pc = 0x11f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x11f424: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x11f424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11f428: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f42c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11F42Cu;
    {
        const bool branch_taken_0x11f42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F42Cu;
        // 0x11f430: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f42c) {
            ctx->pc = 0x11F444u;
            goto label_11f444;
        }
    }
    ctx->pc = 0x11F434u;
    // 0x11f434: 0x0  nop
    ctx->pc = 0x11f434u;
    // NOP
label_11f438:
    // 0x11f438: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x11f438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11f43c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f440: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x11f440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_11f444:
    // 0x11f444: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11f444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x11f448: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11f44c:
    // 0x11f44c: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F44Cu;
    {
        const bool branch_taken_0x11f44c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f44c) {
            ctx->pc = 0x11F470u;
            goto label_11f470;
        }
    }
    ctx->pc = 0x11F454u;
    // 0x11f454: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f458: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11f458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11f45c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F45Cu;
    {
        const bool branch_taken_0x11f45c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F45Cu;
        // 0x11f460: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f45c) {
            ctx->pc = 0x11F470u;
            goto label_11f470;
        }
    }
    ctx->pc = 0x11F464u;
    // 0x11f464: 0xc047f88  jal         func_11FE20
    ctx->pc = 0x11F464u;
    SET_GPR_U32(ctx, 31, 0x11F46Cu);
    ctx->pc = 0x11F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F464u;
    // 0x11f468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE20u, 0x11F464u, 0x11F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F46Cu;
label_11f46c:
    // 0x11f46c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11f46cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_11f470:
    // 0x11f470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11f470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f474: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11f474u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f478: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x11F478u;
    {
        const bool branch_taken_0x11f478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F478u;
        // 0x11f47c: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f478) {
            ctx->pc = 0x11F5C0u;
            goto label_11f5c0;
        }
    }
    ctx->pc = 0x11F480u;
    // 0x11f480: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x11f480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11f484: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11F484u;
    {
        const bool branch_taken_0x11f484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F484u;
        // 0x11f488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f484) {
            ctx->pc = 0x11F4B4u;
            goto label_11f4b4;
        }
    }
    ctx->pc = 0x11F48Cu;
    // 0x11f48c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11f490: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x11f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x11f494: 0x0  nop
    ctx->pc = 0x11f494u;
    // NOP
label_11f498:
    // 0x11f498: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f49c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x11f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x11f4a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f4a4: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x11f4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11f4a8: 0x0  nop
    ctx->pc = 0x11f4a8u;
    // NOP
    // 0x11f4ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F4ACu;
    {
        const bool branch_taken_0x11f4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4ACu;
        // 0x11f4b0: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4ac) {
            ctx->pc = 0x11F498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f498;
        }
    }
    ctx->pc = 0x11F4B4u;
label_11f4b4:
    // 0x11f4b4: 0x14a00040  bnez        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x11F4B4u;
    {
        const bool branch_taken_0x11f4b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4B4u;
        // 0x11f4b8: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4b4) {
            ctx->pc = 0x11F5B8u;
            goto label_11f5b8;
        }
    }
    ctx->pc = 0x11F4BCu;
    // 0x11f4bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f4c0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11f4c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f4c8: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x11F4C8u;
    {
        const bool branch_taken_0x11f4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4C8u;
        // 0x11f4cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4c8) {
            ctx->pc = 0x11F4FCu;
            goto label_11f4fc;
        }
    }
    ctx->pc = 0x11F4D0u;
    // 0x11f4d0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x11f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x11f4d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x11f4d8: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x11f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x11f4dc: 0x0  nop
    ctx->pc = 0x11f4dcu;
    // NOP
label_11f4e0:
    // 0x11f4e0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x11f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x11f4e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f4e8: 0x0  nop
    ctx->pc = 0x11f4e8u;
    // NOP
    // 0x11f4ec: 0x0  nop
    ctx->pc = 0x11f4ecu;
    // NOP
    // 0x11f4f0: 0x0  nop
    ctx->pc = 0x11f4f0u;
    // NOP
    // 0x11f4f4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F4F4u;
    {
        const bool branch_taken_0x11f4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4F4u;
        // 0x11f4f8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4f4) {
            ctx->pc = 0x11F4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f4e0;
        }
    }
    ctx->pc = 0x11F4FCu;
label_11f4fc:
    // 0x11f4fc: 0x2084821  addu        $t1, $s0, $t0
    ctx->pc = 0x11f4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x11f500: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x11f500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11f504: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x11f504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11f508: 0x1440ff5e  bnez        $v0, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x11F508u;
    {
        const bool branch_taken_0x11f508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F508u;
        // 0x11f50c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f508) {
            ctx->pc = 0x11F284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f284;
        }
    }
    ctx->pc = 0x11F510u;
    // 0x11f510: 0x8fab0148  lw          $t3, 0x148($sp)
    ctx->pc = 0x11f510u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x11f514: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x11f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x11f518: 0x2e62021  addu        $a0, $s7, $a2
    ctx->pc = 0x11f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x11f51c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x11f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11f520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f524: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11f524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11f528: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x11f528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11f52c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x11f52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11f530: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x11f530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x11f534: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x11f534u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f538: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x11f538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x11f53c: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x11f53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f540: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x11f540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f544: 0x0  nop
    ctx->pc = 0x11f544u;
    // NOP
label_11f548:
    // 0x11f548: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x11f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f54c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11f54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11f550: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x11f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x11f554: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11f554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f558: 0x640000d  bltz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x11F558u;
    {
        const bool branch_taken_0x11f558 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F558u;
        // 0x11f55c: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f558) {
            ctx->pc = 0x11F590u;
            goto label_11f590;
        }
    }
    ctx->pc = 0x11F560u;
    // 0x11f560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f564: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x11f564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11f568: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x11f568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x11f56c: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x11f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_11f570:
    // 0x11f570: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x11f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f574: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x11f574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x11f578: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11f578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f57c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x11f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x11f580: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11f580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11f584: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f588: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11F588u;
    {
        const bool branch_taken_0x11f588 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F588u;
        // 0x11f58c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f588) {
            ctx->pc = 0x11F570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f570;
        }
    }
    ctx->pc = 0x11F590u;
label_11f590:
    // 0x11f590: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11f590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11f594: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x11f594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11f598: 0x146102a  slt         $v0, $t2, $a2
    ctx->pc = 0x11f598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11f59c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11f59cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x11f5a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x11f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x11f5a4: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x11F5A4u;
    {
        const bool branch_taken_0x11f5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5A4u;
        // 0x11f5a8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5a4) {
            ctx->pc = 0x11F548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f548;
        }
    }
    ctx->pc = 0x11F5ACu;
    // 0x11f5ac: 0x1000ff35  b           . + 4 + (-0xCB << 2)
    ctx->pc = 0x11F5ACu;
    {
        const bool branch_taken_0x11f5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5ACu;
        // 0x11f5b0: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5ac) {
            ctx->pc = 0x11F284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f284;
        }
    }
    ctx->pc = 0x11F5B4u;
    // 0x11f5b4: 0x0  nop
    ctx->pc = 0x11f5b4u;
    // NOP
label_11f5b8:
    // 0x11f5b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11f5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f5bc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11f5bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11f5c0:
    // 0x11f5c0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x11F5C0u;
    {
        const bool branch_taken_0x11f5c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5C0u;
        // 0x11f5c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5c0) {
            ctx->pc = 0x11F610u;
            goto label_11f610;
        }
    }
    ctx->pc = 0x11F5C8u;
    // 0x11f5c8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x11f5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11f5cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11f5d0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x11f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11f5d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f5d8: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x11F5D8u;
    {
        const bool branch_taken_0x11f5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5D8u;
        // 0x11f5dc: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5d8) {
            ctx->pc = 0x11F688u;
            goto label_11f688;
        }
    }
    ctx->pc = 0x11F5E0u;
    // 0x11f5e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f5e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5e4: 0x0  nop
    ctx->pc = 0x11f5e4u;
    // NOP
label_11f5e8:
    // 0x11f5e8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x11f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x11f5ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x11f5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11f5f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f5f4: 0x0  nop
    ctx->pc = 0x11f5f4u;
    // NOP
    // 0x11f5f8: 0x0  nop
    ctx->pc = 0x11f5f8u;
    // NOP
    // 0x11f5fc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F5FCu;
    {
        const bool branch_taken_0x11f5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5FCu;
        // 0x11f600: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5fc) {
            ctx->pc = 0x11F5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f5e8;
        }
    }
    ctx->pc = 0x11F604u;
    // 0x11f604: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11F604u;
    {
        const bool branch_taken_0x11f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f604) {
            ctx->pc = 0x11F688u;
            goto label_11f688;
        }
    }
    ctx->pc = 0x11F60Cu;
    // 0x11f60c: 0x0  nop
    ctx->pc = 0x11f60cu;
    // NOP
label_11f610:
    // 0x11f610: 0xc047f88  jal         func_11FE20
    ctx->pc = 0x11F610u;
    SET_GPR_U32(ctx, 31, 0x11F618u);
    ctx->pc = 0x11F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F610u;
    // 0x11f614: 0x112023  negu        $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE20u, 0x11F610u, 0x11F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F618u;
label_11f618:
    // 0x11f618: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x11f618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x11f61c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f620: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11f620u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11f624: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x11f624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f628: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x11F628u;
    {
        const bool branch_taken_0x11f628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F628u;
        // 0x11f62c: 0x3b31021  addu        $v0, $sp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f628) {
            ctx->pc = 0x11F680u;
            goto label_11f680;
        }
    }
    ctx->pc = 0x11F630u;
    // 0x11f630: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x11f630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x11f634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f638: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11f638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11f63c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11f640: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x11f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x11f644: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11f644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11f648: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11f64c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f64cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11f650: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11f650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11f654: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11f654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f658: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11f658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11f65c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x11f65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11f660: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11f660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11f664: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11f668: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x11f668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x11f66c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f66cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11f670: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x11f670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11f674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F674u;
    {
        const bool branch_taken_0x11f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F674u;
        // 0x11f678: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f674) {
            ctx->pc = 0x11F688u;
            goto label_11f688;
        }
    }
    ctx->pc = 0x11F67Cu;
    // 0x11f67c: 0x0  nop
    ctx->pc = 0x11f67cu;
    // NOP
label_11f680:
    // 0x11f680: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11f684: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11f684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_11f688:
    // 0x11f688: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f68c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11f68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11f690: 0xc047f88  jal         func_11FE20
    ctx->pc = 0x11F690u;
    SET_GPR_U32(ctx, 31, 0x11F698u);
    ctx->pc = 0x11F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F690u;
    // 0x11f694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE20u, 0x11F690u, 0x11F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F698u;
label_11f698:
    // 0x11f698: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11f698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f69c: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x11F69Cu;
    {
        const bool branch_taken_0x11f69c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x11F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F69Cu;
        // 0x11f6a0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f69c) {
            ctx->pc = 0x11F6E4u;
            goto label_11f6e4;
        }
    }
    ctx->pc = 0x11F6A4u;
    // 0x11f6a4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x11f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11f6a8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x11f6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x11f6ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f6b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6b4: 0x0  nop
    ctx->pc = 0x11f6b4u;
    // NOP
label_11f6b8:
    // 0x11f6b8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11f6bc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f6c0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11f6c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11f6c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f6cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11f6ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11f6d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11f6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11f6d4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x11f6d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11f6d8: 0x4c1fff7  bgez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11F6D8u;
    {
        const bool branch_taken_0x11f6d8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6D8u;
        // 0x11f6dc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6d8) {
            ctx->pc = 0x11F6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f6b8;
        }
    }
    ctx->pc = 0x11F6E0u;
    // 0x11f6e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11f6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f6e4:
    // 0x11f6e4: 0x4c00024  bltz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x11F6E4u;
    {
        const bool branch_taken_0x11f6e4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x11F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6E4u;
        // 0x11f6e8: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6e4) {
            ctx->pc = 0x11F778u;
            goto label_11f778;
        }
    }
    ctx->pc = 0x11F6ECu;
    // 0x11f6ec: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x11f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11f6f0: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x11f6f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6f4: 0x244ced58  addiu       $t4, $v0, -0x12A8
    ctx->pc = 0x11f6f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962520));
    // 0x11f6f8: 0x27ab00a0  addiu       $t3, $sp, 0xA0
    ctx->pc = 0x11f6f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11f6fc: 0x0  nop
    ctx->pc = 0x11f6fcu;
    // NOP
label_11f700:
    // 0x11f700: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11f700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f704: 0x6800016  bltz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F704u;
    {
        const bool branch_taken_0x11f704 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x11F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F704u;
        // 0x11f708: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f704) {
            ctx->pc = 0x11F760u;
            goto label_11f760;
        }
    }
    ctx->pc = 0x11F70Cu;
    // 0x11f70c: 0x2063823  subu        $a3, $s0, $a2
    ctx->pc = 0x11f70cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x11f710: 0x4e00014  bltz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F710u;
    {
        const bool branch_taken_0x11f710 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x11F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F710u;
        // 0x11f714: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f710) {
            ctx->pc = 0x11F764u;
            goto label_11f764;
        }
    }
    ctx->pc = 0x11F718u;
    // 0x11f718: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11f718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11f71c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x11f71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f720: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x11f720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11f724: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x11f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11f728:
    // 0x11f728: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x11f728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11f72c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x11f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f730: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11f734: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11f734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11f738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f73c: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x11f73cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11f740: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x11f740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11f744: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F744u;
    {
        const bool branch_taken_0x11f744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F744u;
        // 0x11f748: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f744) {
            ctx->pc = 0x11F764u;
            goto label_11f764;
        }
    }
    ctx->pc = 0x11F74Cu;
    // 0x11f74c: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x11F74Cu;
    {
        const bool branch_taken_0x11f74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f74c) {
            ctx->pc = 0x11F750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F74Cu;
            // 0x11f750: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f728;
        }
    }
    ctx->pc = 0x11F754u;
    // 0x11f754: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F754u;
    {
        const bool branch_taken_0x11f754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F754u;
        // 0x11f758: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f754) {
            ctx->pc = 0x11F768u;
            goto label_11f768;
        }
    }
    ctx->pc = 0x11F75Cu;
    // 0x11f75c: 0x0  nop
    ctx->pc = 0x11f75cu;
    // NOP
label_11f760:
    // 0x11f760: 0x2063823  subu        $a3, $s0, $a2
    ctx->pc = 0x11f760u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_11f764:
    // 0x11f764: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x11f764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_11f768:
    // 0x11f768: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f76c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x11f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x11f770: 0x4c1ffe3  bgez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x11F770u;
    {
        const bool branch_taken_0x11f770 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F770u;
        // 0x11f774: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f770) {
            ctx->pc = 0x11F700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f700;
        }
    }
    ctx->pc = 0x11F778u;
label_11f778:
    // 0x11f778: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x11f778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x11f77c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x11f77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11f780: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F780u;
    {
        const bool branch_taken_0x11f780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f780) {
            ctx->pc = 0x11F784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F780u;
            // 0x11f784: 0x8fa60144  lw          $a2, 0x144($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F7A0u;
            goto label_11f7a0;
        }
    }
    ctx->pc = 0x11F788u;
    // 0x11f788: 0x5ca0001d  bgtzl       $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x11F788u;
    {
        const bool branch_taken_0x11f788 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x11f788) {
            ctx->pc = 0x11F78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F788u;
            // 0x11f78c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F800u;
            goto label_11f800;
        }
    }
    ctx->pc = 0x11F790u;
    // 0x11f790: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F790u;
    {
        const bool branch_taken_0x11f790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F790u;
        // 0x11f794: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f790) {
            ctx->pc = 0x11F7B8u;
            goto label_11f7b8;
        }
    }
    ctx->pc = 0x11F798u;
    // 0x11f798: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x11F798u;
    {
        const bool branch_taken_0x11f798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F798u;
        // 0x11f79c: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f798) {
            ctx->pc = 0x11F984u;
            goto label_11f984;
        }
    }
    ctx->pc = 0x11F7A0u;
label_11f7a0:
    // 0x11f7a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11f7a4: 0x10c20038  beq         $a2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x11F7A4u;
    {
        const bool branch_taken_0x11f7a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7A4u;
        // 0x11f7a8: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7a4) {
            ctx->pc = 0x11F888u;
            goto label_11f888;
        }
    }
    ctx->pc = 0x11F7ACu;
    // 0x11f7ac: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x11F7ACu;
    {
        const bool branch_taken_0x11f7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7ACu;
        // 0x11f7b0: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7ac) {
            ctx->pc = 0x11F984u;
            goto label_11f984;
        }
    }
    ctx->pc = 0x11F7B4u;
    // 0x11f7b4: 0x0  nop
    ctx->pc = 0x11f7b4u;
    // NOP
label_11f7b8:
    // 0x11f7b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11f7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11f7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f7c0: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x11F7C0u;
    {
        const bool branch_taken_0x11f7c0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x11F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7C0u;
        // 0x11f7c4: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7c0) {
            ctx->pc = 0x11F7ECu;
            goto label_11f7ec;
        }
    }
    ctx->pc = 0x11F7C8u;
    // 0x11f7c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11f7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11f7d0:
    // 0x11f7d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f7d4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x11f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x11f7d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f7dc: 0x0  nop
    ctx->pc = 0x11f7dcu;
    // NOP
    // 0x11f7e0: 0x0  nop
    ctx->pc = 0x11f7e0u;
    // NOP
    // 0x11f7e4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F7E4u;
    {
        const bool branch_taken_0x11f7e4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7E4u;
        // 0x11f7e8: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7e4) {
            ctx->pc = 0x11F7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f7d0;
        }
    }
    ctx->pc = 0x11F7ECu;
label_11f7ec:
    // 0x11f7ec: 0x12c00063  beqz        $s6, . + 4 + (0x63 << 2)
    ctx->pc = 0x11F7ECu;
    {
        const bool branch_taken_0x11f7ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7ECu;
        // 0x11f7f0: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7ec) {
            ctx->pc = 0x11F97Cu;
            goto label_11f97c;
        }
    }
    ctx->pc = 0x11F7F4u;
    // 0x11f7f4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11f7f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x11f7f8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x11F7F8u;
    {
        const bool branch_taken_0x11f7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7F8u;
        // 0x11f7fc: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7f8) {
            ctx->pc = 0x11F97Cu;
            goto label_11f97c;
        }
    }
    ctx->pc = 0x11F800u;
label_11f800:
    // 0x11f800: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11f800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f804: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x11F804u;
    {
        const bool branch_taken_0x11f804 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x11F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F804u;
        // 0x11f808: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f804) {
            ctx->pc = 0x11F834u;
            goto label_11f834;
        }
    }
    ctx->pc = 0x11F80Cu;
    // 0x11f80c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11f810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11f810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11f814: 0x0  nop
    ctx->pc = 0x11f814u;
    // NOP
label_11f818:
    // 0x11f818: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f81c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x11f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x11f820: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f824: 0x0  nop
    ctx->pc = 0x11f824u;
    // NOP
    // 0x11f828: 0x0  nop
    ctx->pc = 0x11f828u;
    // NOP
    // 0x11f82c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F82Cu;
    {
        const bool branch_taken_0x11f82c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F82Cu;
        // 0x11f830: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f82c) {
            ctx->pc = 0x11F818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f818;
        }
    }
    ctx->pc = 0x11F834u;
label_11f834:
    // 0x11f834: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F834u;
    {
        const bool branch_taken_0x11f834 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F834u;
        // 0x11f838: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f834) {
            ctx->pc = 0x11F844u;
            goto label_11f844;
        }
    }
    ctx->pc = 0x11F83Cu;
    // 0x11f83c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11f83cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x11f840: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x11f840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_11f844:
    // 0x11f844: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x11f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f848: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x11F848u;
    {
        const bool branch_taken_0x11f848 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F848u;
        // 0x11f84c: 0x46020081  sub.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f848) {
            ctx->pc = 0x11F874u;
            goto label_11f874;
        }
    }
    ctx->pc = 0x11F850u;
    // 0x11f850: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11f850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f854: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x11f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_11f858:
    // 0x11f858: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f85c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x11f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11f860: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f864: 0x0  nop
    ctx->pc = 0x11f864u;
    // NOP
    // 0x11f868: 0x0  nop
    ctx->pc = 0x11f868u;
    // NOP
    // 0x11f86c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F86Cu;
    {
        const bool branch_taken_0x11f86c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F86Cu;
        // 0x11f870: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f86c) {
            ctx->pc = 0x11F858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f858;
        }
    }
    ctx->pc = 0x11F874u;
label_11f874:
    // 0x11f874: 0x12c00041  beqz        $s6, . + 4 + (0x41 << 2)
    ctx->pc = 0x11F874u;
    {
        const bool branch_taken_0x11f874 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F874u;
        // 0x11f878: 0xe7c20004  swc1        $f2, 0x4($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f874) {
            ctx->pc = 0x11F97Cu;
            goto label_11f97c;
        }
    }
    ctx->pc = 0x11F87Cu;
    // 0x11f87c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11f87cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x11f880: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x11F880u;
    {
        const bool branch_taken_0x11f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F880u;
        // 0x11f884: 0xe7c00004  swc1        $f0, 0x4($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f880) {
            ctx->pc = 0x11F97Cu;
            goto label_11f97c;
        }
    }
    ctx->pc = 0x11F888u;
label_11f888:
    // 0x11f888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11f888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f88c: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x11F88Cu;
    {
        const bool branch_taken_0x11f88c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x11F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F88Cu;
        // 0x11f890: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f88c) {
            ctx->pc = 0x11F8D0u;
            goto label_11f8d0;
        }
    }
    ctx->pc = 0x11F894u;
    // 0x11f894: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11f894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11f898: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11f898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11f89c: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x11f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
label_11f8a0:
    // 0x11f8a0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x11f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f8a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f8a8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x11f8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f8ac: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x11f8acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11f8b0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11f8b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11f8b4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x11f8b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11f8b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11f8b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11f8bc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x11f8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x11f8c0: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11F8C0u;
    {
        const bool branch_taken_0x11f8c0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8C0u;
        // 0x11f8c4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8c0) {
            ctx->pc = 0x11F8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f8a0;
        }
    }
    ctx->pc = 0x11F8C8u;
    // 0x11f8c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11f8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8cc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x11f8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_11f8d0:
    // 0x11f8d0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x11F8D0u;
    {
        const bool branch_taken_0x11f8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f8d0) {
            ctx->pc = 0x11F8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F8D0u;
            // 0x11f8d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F918u;
            goto label_11f918;
        }
    }
    ctx->pc = 0x11F8D8u;
    // 0x11f8d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11f8dc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11f8e0: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x11f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x11f8e4: 0x0  nop
    ctx->pc = 0x11f8e4u;
    // NOP
label_11f8e8:
    // 0x11f8e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f8ec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f8f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x11f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f8f4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x11f8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f8f8: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x11f8f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11f8fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11f8fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11f900: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x11f900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11f904: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11f904u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11f908: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x11f908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x11f90c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11F90Cu;
    {
        const bool branch_taken_0x11f90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F90Cu;
        // 0x11f910: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f90c) {
            ctx->pc = 0x11F8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f8e8;
        }
    }
    ctx->pc = 0x11F914u;
    // 0x11f914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11f914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f918:
    // 0x11f918: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11f918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f91c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x11f91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f920: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11F920u;
    {
        const bool branch_taken_0x11f920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F920u;
        // 0x11f924: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f920) {
            ctx->pc = 0x11F94Cu;
            goto label_11f94c;
        }
    }
    ctx->pc = 0x11F928u;
    // 0x11f928: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x11f928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11f92c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x11f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11f930:
    // 0x11f930: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f934: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x11f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x11f938: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11f938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11f93c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x11f93cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f940: 0x0  nop
    ctx->pc = 0x11f940u;
    // NOP
    // 0x11f944: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F944u;
    {
        const bool branch_taken_0x11f944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F944u;
        // 0x11f948: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f944) {
            ctx->pc = 0x11F930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f930;
        }
    }
    ctx->pc = 0x11F94Cu;
label_11f94c:
    // 0x11f94c: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F94Cu;
    {
        const bool branch_taken_0x11f94c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F94Cu;
        // 0x11f950: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f94c) {
            ctx->pc = 0x11F960u;
            goto label_11f960;
        }
    }
    ctx->pc = 0x11F954u;
    // 0x11f954: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11F954u;
    {
        const bool branch_taken_0x11f954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F954u;
        // 0x11f958: 0xc7a100a4  lwc1        $f1, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f954) {
            ctx->pc = 0x11F970u;
            goto label_11f970;
        }
    }
    ctx->pc = 0x11F95Cu;
    // 0x11f95c: 0x0  nop
    ctx->pc = 0x11f95cu;
    // NOP
label_11f960:
    // 0x11f960: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11f960u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x11f964: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x11f964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f968: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11f968u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11f96c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11f96cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_11f970:
    // 0x11f970: 0xe7c20008  swc1        $f2, 0x8($fp)
    ctx->pc = 0x11f970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x11f974: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x11f974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x11f978: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x11f978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_11f97c:
    // 0x11f97c: 0x32a20007  andi        $v0, $s5, 0x7
    ctx->pc = 0x11f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x11f980: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x11f980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_11f984:
    // 0x11f984: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x11f984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x11f988: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x11f988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x11f98c: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x11f98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x11f990: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x11f990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x11f994: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x11f994u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x11f998: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x11f998u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x11f99c: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x11f99cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x11f9a0: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x11f9a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x11f9a4: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x11f9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x11f9a8: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x11f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11F9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9ACu;
        // 0x11f9b0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F9B4u;
    // 0x11f9b4: 0x0  nop
    ctx->pc = 0x11f9b4u;
    // NOP
    ctx->pc = 0x11f9b8u;
}
