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

// Function: sub_004D7870
// Address: 0x4d7870 - 0x4d7a70
void sub_004D7870_0x4d7870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7870_0x4d7870");
#endif

    switch (ctx->pc) {
        case 0x4d7870u: goto label_4d7870;
        case 0x4d7874u: goto label_4d7874;
        case 0x4d7878u: goto label_4d7878;
        case 0x4d787cu: goto label_4d787c;
        case 0x4d7880u: goto label_4d7880;
        case 0x4d7884u: goto label_4d7884;
        case 0x4d7888u: goto label_4d7888;
        case 0x4d788cu: goto label_4d788c;
        case 0x4d7890u: goto label_4d7890;
        case 0x4d7894u: goto label_4d7894;
        case 0x4d7898u: goto label_4d7898;
        case 0x4d789cu: goto label_4d789c;
        case 0x4d78a0u: goto label_4d78a0;
        case 0x4d78a4u: goto label_4d78a4;
        case 0x4d78a8u: goto label_4d78a8;
        case 0x4d78acu: goto label_4d78ac;
        case 0x4d78b0u: goto label_4d78b0;
        case 0x4d78b4u: goto label_4d78b4;
        case 0x4d78b8u: goto label_4d78b8;
        case 0x4d78bcu: goto label_4d78bc;
        case 0x4d78c0u: goto label_4d78c0;
        case 0x4d78c4u: goto label_4d78c4;
        case 0x4d78c8u: goto label_4d78c8;
        case 0x4d78ccu: goto label_4d78cc;
        case 0x4d78d0u: goto label_4d78d0;
        case 0x4d78d4u: goto label_4d78d4;
        case 0x4d78d8u: goto label_4d78d8;
        case 0x4d78dcu: goto label_4d78dc;
        case 0x4d78e0u: goto label_4d78e0;
        case 0x4d78e4u: goto label_4d78e4;
        case 0x4d78e8u: goto label_4d78e8;
        case 0x4d78ecu: goto label_4d78ec;
        case 0x4d78f0u: goto label_4d78f0;
        case 0x4d78f4u: goto label_4d78f4;
        case 0x4d78f8u: goto label_4d78f8;
        case 0x4d78fcu: goto label_4d78fc;
        case 0x4d7900u: goto label_4d7900;
        case 0x4d7904u: goto label_4d7904;
        case 0x4d7908u: goto label_4d7908;
        case 0x4d790cu: goto label_4d790c;
        case 0x4d7910u: goto label_4d7910;
        case 0x4d7914u: goto label_4d7914;
        case 0x4d7918u: goto label_4d7918;
        case 0x4d791cu: goto label_4d791c;
        case 0x4d7920u: goto label_4d7920;
        case 0x4d7924u: goto label_4d7924;
        case 0x4d7928u: goto label_4d7928;
        case 0x4d792cu: goto label_4d792c;
        case 0x4d7930u: goto label_4d7930;
        case 0x4d7934u: goto label_4d7934;
        case 0x4d7938u: goto label_4d7938;
        case 0x4d793cu: goto label_4d793c;
        case 0x4d7940u: goto label_4d7940;
        case 0x4d7944u: goto label_4d7944;
        case 0x4d7948u: goto label_4d7948;
        case 0x4d794cu: goto label_4d794c;
        case 0x4d7950u: goto label_4d7950;
        case 0x4d7954u: goto label_4d7954;
        case 0x4d7958u: goto label_4d7958;
        case 0x4d795cu: goto label_4d795c;
        case 0x4d7960u: goto label_4d7960;
        case 0x4d7964u: goto label_4d7964;
        case 0x4d7968u: goto label_4d7968;
        case 0x4d796cu: goto label_4d796c;
        case 0x4d7970u: goto label_4d7970;
        case 0x4d7974u: goto label_4d7974;
        case 0x4d7978u: goto label_4d7978;
        case 0x4d797cu: goto label_4d797c;
        case 0x4d7980u: goto label_4d7980;
        case 0x4d7984u: goto label_4d7984;
        case 0x4d7988u: goto label_4d7988;
        case 0x4d798cu: goto label_4d798c;
        case 0x4d7990u: goto label_4d7990;
        case 0x4d7994u: goto label_4d7994;
        case 0x4d7998u: goto label_4d7998;
        case 0x4d799cu: goto label_4d799c;
        case 0x4d79a0u: goto label_4d79a0;
        case 0x4d79a4u: goto label_4d79a4;
        case 0x4d79a8u: goto label_4d79a8;
        case 0x4d79acu: goto label_4d79ac;
        case 0x4d79b0u: goto label_4d79b0;
        case 0x4d79b4u: goto label_4d79b4;
        case 0x4d79b8u: goto label_4d79b8;
        case 0x4d79bcu: goto label_4d79bc;
        case 0x4d79c0u: goto label_4d79c0;
        case 0x4d79c4u: goto label_4d79c4;
        case 0x4d79c8u: goto label_4d79c8;
        case 0x4d79ccu: goto label_4d79cc;
        case 0x4d79d0u: goto label_4d79d0;
        case 0x4d79d4u: goto label_4d79d4;
        case 0x4d79d8u: goto label_4d79d8;
        case 0x4d79dcu: goto label_4d79dc;
        case 0x4d79e0u: goto label_4d79e0;
        case 0x4d79e4u: goto label_4d79e4;
        case 0x4d79e8u: goto label_4d79e8;
        case 0x4d79ecu: goto label_4d79ec;
        case 0x4d79f0u: goto label_4d79f0;
        case 0x4d79f4u: goto label_4d79f4;
        case 0x4d79f8u: goto label_4d79f8;
        case 0x4d79fcu: goto label_4d79fc;
        case 0x4d7a00u: goto label_4d7a00;
        case 0x4d7a04u: goto label_4d7a04;
        case 0x4d7a08u: goto label_4d7a08;
        case 0x4d7a0cu: goto label_4d7a0c;
        case 0x4d7a10u: goto label_4d7a10;
        case 0x4d7a14u: goto label_4d7a14;
        case 0x4d7a18u: goto label_4d7a18;
        case 0x4d7a1cu: goto label_4d7a1c;
        case 0x4d7a20u: goto label_4d7a20;
        case 0x4d7a24u: goto label_4d7a24;
        case 0x4d7a28u: goto label_4d7a28;
        case 0x4d7a2cu: goto label_4d7a2c;
        case 0x4d7a30u: goto label_4d7a30;
        case 0x4d7a34u: goto label_4d7a34;
        case 0x4d7a38u: goto label_4d7a38;
        case 0x4d7a3cu: goto label_4d7a3c;
        case 0x4d7a40u: goto label_4d7a40;
        case 0x4d7a44u: goto label_4d7a44;
        case 0x4d7a48u: goto label_4d7a48;
        case 0x4d7a4cu: goto label_4d7a4c;
        case 0x4d7a50u: goto label_4d7a50;
        case 0x4d7a54u: goto label_4d7a54;
        case 0x4d7a58u: goto label_4d7a58;
        case 0x4d7a5cu: goto label_4d7a5c;
        case 0x4d7a60u: goto label_4d7a60;
        case 0x4d7a64u: goto label_4d7a64;
        case 0x4d7a68u: goto label_4d7a68;
        case 0x4d7a6cu: goto label_4d7a6c;
        default: break;
    }

    ctx->pc = 0x4d7870u;

label_4d7870:
    // 0x4d7870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d7870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d7874:
    // 0x4d7874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d7878:
    // 0x4d7878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d7878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d787c:
    // 0x4d787c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d7880:
    // 0x4d7880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d7880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d7884:
    // 0x4d7884: 0xc1232f2  jal         func_48CBC8
label_4d7888:
    if (ctx->pc == 0x4D7888u) {
        ctx->pc = 0x4D7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7884u;
        // 0x4d7888: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D788Cu;
        goto label_4d788c;
    }
    ctx->pc = 0x4D7884u;
    SET_GPR_U32(ctx, 31, 0x4D788Cu);
    ctx->pc = 0x4D7888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7884u;
    // 0x4d7888: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4D7884u, 0x4D788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D788Cu;
label_4d788c:
    // 0x4d788c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d788cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d7890:
    // 0x4d7890: 0xac6210cc  sw          $v0, 0x10CC($v1)
    ctx->pc = 0x4d7890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4300), GPR_U32(ctx, 2));
label_4d7894:
    // 0x4d7894: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d7894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d7898:
    // 0x4d7898: 0x4400055  bltz        $v0, . + 4 + (0x55 << 2)
label_4d789c:
    if (ctx->pc == 0x4D789Cu) {
        ctx->pc = 0x4D789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7898u;
        // 0x4d789c: 0x3c0c007f  lui         $t4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D78A0u;
        goto label_4d78a0;
    }
    ctx->pc = 0x4D7898u;
    {
        const bool branch_taken_0x4d7898 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7898u;
        // 0x4d789c: 0x3c0c007f  lui         $t4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7898) {
            ctx->pc = 0x4D79F0u;
            goto label_4d79f0;
        }
    }
    ctx->pc = 0x4D78A0u;
label_4d78a0:
    // 0x4d78a0: 0xc12b642  jal         func_4AD908
label_4d78a4:
    if (ctx->pc == 0x4D78A4u) {
        ctx->pc = 0x4D78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D78A0u;
        // 0x4d78a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D78A8u;
        goto label_4d78a8;
    }
    ctx->pc = 0x4D78A0u;
    SET_GPR_U32(ctx, 31, 0x4D78A8u);
    ctx->pc = 0x4D78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D78A0u;
    // 0x4d78a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D78A0u, 0x4D78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D78A8u;
label_4d78a8:
    // 0x4d78a8: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4d78a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4d78ac:
    // 0x4d78ac: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d78acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d78b0:
    // 0x4d78b0: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4d78b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_4d78b4:
    // 0x4d78b4: 0x24a510b0  addiu       $a1, $a1, 0x10B0
    ctx->pc = 0x4d78b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
label_4d78b8:
    // 0x4d78b8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4d78b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4d78bc:
    // 0x4d78bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d78c0:
    // 0x4d78c0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d78c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d78c4:
    // 0x4d78c4: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4d78c4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
label_4d78c8:
    // 0x4d78c8: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d78c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
label_4d78cc:
    // 0x4d78cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d78ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d78d0:
    // 0x4d78d0: 0x258910bc  addiu       $t1, $t4, 0x10BC
    ctx->pc = 0x4d78d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4284));
label_4d78d4:
    // 0x4d78d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d78d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d78d8:
    // 0x4d78d8: 0x250810c4  addiu       $t0, $t0, 0x10C4
    ctx->pc = 0x4d78d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4292));
label_4d78dc:
    // 0x4d78dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d78e0:
    // 0x4d78e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d78e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d78e4:
    // 0x4d78e4: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x4d78e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_4d78e8:
    // 0x4d78e8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x4d78e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d78ec:
    // 0x4d78ec: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d78ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d78f0:
    // 0x4d78f0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4d78f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_4d78f4:
    // 0x4d78f4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d78f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d78f8:
    // 0x4d78f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d78f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d78fc:
    // 0x4d78fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d78fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d7900:
    // 0x4d7900: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d7904:
    // 0x4d7904: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d7904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d7908:
    // 0x4d7908: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d7908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d790c:
    // 0x4d790c: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x4d790cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_4d7910:
    // 0x4d7910: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d7910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d7914:
    // 0x4d7914: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d7914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d7918:
    // 0x4d7918: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d7918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d791c:
    // 0x4d791c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d791cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d7920:
    // 0x4d7920: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d7920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d7924:
    // 0x4d7924: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4d7924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_4d7928:
    // 0x4d7928: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d7928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d792c:
    // 0x4d792c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d792cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d7930:
    // 0x4d7930: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d7930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d7934:
    // 0x4d7934: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4d7934u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d7938:
    // 0x4d7938: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4d7938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4d793c:
    // 0x4d793c: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4d793cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_4d7940:
    // 0x4d7940: 0xa6040160  sh          $a0, 0x160($s0)
    ctx->pc = 0x4d7940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 4));
label_4d7944:
    // 0x4d7944: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4d7944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4d7948:
    // 0x4d7948: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7948u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d794c:
    // 0x4d794c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4d7950:
    // 0x4d7950: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d7950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d7954:
    // 0x4d7954: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4d7954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d7958:
    // 0x4d7958: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d795c:
    // 0x4d795c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4d795cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4d7960:
    // 0x4d7960: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d7960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d7964:
    // 0x4d7964: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d7964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d7968:
    // 0x4d7968: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d7968u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4d796c:
    // 0x4d796c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4d796cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_4d7970:
    // 0x4d7970: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d7970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d7974:
    // 0x4d7974: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4d7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4d7978:
    // 0x4d7978: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4d7978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4d797c:
    // 0x4d797c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4d797cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4d7980:
    // 0x4d7980: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d7984:
    // 0x4d7984: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4d7984u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d7988:
    // 0x4d7988: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d7988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d798c:
    // 0x4d798c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d798cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4d7990:
    // 0x4d7990: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d7990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4d7994:
    // 0x4d7994: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4d7994u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_4d7998:
    // 0x4d7998: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d799c:
    // 0x4d799c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4d799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4d79a0:
    // 0x4d79a0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d79a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d79a4:
    // 0x4d79a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d79a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d79a8:
    // 0x4d79a8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4d79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_4d79ac:
    // 0x4d79ac: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4d79acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d79b0:
    // 0x4d79b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d79b4:
    // 0x4d79b4: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x4d79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
label_4d79b8:
    // 0x4d79b8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4d79b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_4d79bc:
    // 0x4d79bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d79bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d79c0:
    // 0x4d79c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d79c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d79c4:
    // 0x4d79c4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4d79c8:
    // 0x4d79c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4d79c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d79cc:
    // 0x4d79cc: 0xa60b000e  sh          $t3, 0xE($s0)
    ctx->pc = 0x4d79ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 11));
label_4d79d0:
    // 0x4d79d0: 0xa6030164  sh          $v1, 0x164($s0)
    ctx->pc = 0x4d79d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 3));
label_4d79d4:
    // 0x4d79d4: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d79d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4d79d8:
    // 0x4d79d8: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4d79d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
label_4d79dc:
    // 0x4d79dc: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d79dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4d79e0:
    // 0x4d79e0: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d79e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d79e4:
    // 0x4d79e4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d79e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d79e8:
    // 0x4d79e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d79e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d79ec:
    // 0x4d79ec: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d79ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d79f0:
    // 0x4d79f0: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d79f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4d79f4:
    // 0x4d79f4: 0x258a10bc  addiu       $t2, $t4, 0x10BC
    ctx->pc = 0x4d79f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 4284));
label_4d79f8:
    // 0x4d79f8: 0x252910c0  addiu       $t1, $t1, 0x10C0
    ctx->pc = 0x4d79f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4288));
label_4d79fc:
    // 0x4d79fc: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4d79fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4d7a00:
    // 0x4d7a00: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4d7a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4d7a04:
    // 0x4d7a04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4d7a08:
    // 0x4d7a08: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4d7a0c:
    // 0x4d7a0c: 0x3442041a  ori         $v0, $v0, 0x41A
    ctx->pc = 0x4d7a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1050);
label_4d7a10:
    // 0x4d7a10: 0x34630477  ori         $v1, $v1, 0x477
    ctx->pc = 0x4d7a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1143);
label_4d7a14:
    // 0x4d7a14: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d7a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4d7a18:
    // 0x4d7a18: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d7a18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4d7a1c:
    // 0x4d7a1c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d7a1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4d7a20:
    // 0x4d7a20: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4d7a20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_4d7a24:
    // 0x4d7a24: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4d7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
label_4d7a28:
    // 0x4d7a28: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4d7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_4d7a2c:
    // 0x4d7a2c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4d7a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4d7a30:
    // 0x4d7a30: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4d7a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4d7a34:
    // 0x4d7a34: 0xc12b698  jal         func_4ADA60
label_4d7a38:
    if (ctx->pc == 0x4D7A38u) {
        ctx->pc = 0x4D7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7A34u;
        // 0x4d7a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D7A3Cu;
        goto label_4d7a3c;
    }
    ctx->pc = 0x4D7A34u;
    SET_GPR_U32(ctx, 31, 0x4D7A3Cu);
    ctx->pc = 0x4D7A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7A34u;
    // 0x4d7a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4D7A34u, 0x4D7A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7A3Cu;
label_4d7a3c:
    // 0x4d7a3c: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4d7a3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d7a40:
    // 0x4d7a40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d7a44:
    // 0x4d7a44: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d7a44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d7a48:
    // 0x4d7a48: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x4d7a48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4d7a4c:
    // 0x4d7a4c: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_4d7a50:
    if (ctx->pc == 0x4D7A50u) {
        ctx->pc = 0x4D7A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7A4Cu;
        // 0x4d7a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D7A54u;
        goto label_4d7a54;
    }
    ctx->pc = 0x4D7A4Cu;
    {
        const bool branch_taken_0x4d7a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7a4c) {
            ctx->pc = 0x4D7A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D7A4Cu;
            // 0x4d7a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D7AE8u;
            return;
        }
    }
    ctx->pc = 0x4D7A54u;
label_4d7a54:
    // 0x4d7a54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d7a58:
    // 0x4d7a58: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4d7a5c:
    // 0x4d7a5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d7a60:
    // 0x4d7a60: 0x8c63b840  lw          $v1, -0x47C0($v1)
    ctx->pc = 0x4d7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948928)));
label_4d7a64:
    // 0x4d7a64: 0x600008  jr          $v1
label_4d7a68:
    if (ctx->pc == 0x4D7A68u) {
        ctx->pc = 0x4D7A6Cu;
        goto label_4d7a6c;
    }
    ctx->pc = 0x4D7A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7A64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4D7A6Cu;
label_4d7a6c:
    // 0x4d7a6c: 0x0  nop
    ctx->pc = 0x4d7a6cu;
    // NOP
    ctx->pc = 0x4d7a70u;
}
