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

// Function: sub_004ED1B8
// Address: 0x4ed1b8 - 0x4ed308
void sub_004ED1B8_0x4ed1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED1B8_0x4ed1b8");
#endif

    switch (ctx->pc) {
        case 0x4ed27cu: goto label_4ed27c;
        default: break;
    }

    ctx->pc = 0x4ed1b8u;

    // 0x4ed1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ed1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ed1bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ed1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ed1c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ed1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ed1c4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ed1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ed1c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ed1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ed1cc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ed1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed1d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ed1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ed1d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ed1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed1d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4ed1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4ed1dc: 0x261011e8  addiu       $s0, $s0, 0x11E8
    ctx->pc = 0x4ed1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4584));
    // 0x4ed1e0: 0x8c45120c  lw          $a1, 0x120C($v0)
    ctx->pc = 0x4ed1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F120Cu));
    // 0x4ed1e4: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4ed1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4ed1e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ed1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ed1ec: 0x250811ec  addiu       $t0, $t0, 0x11EC
    ctx->pc = 0x4ed1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4588));
    // 0x4ed1f0: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x4ed1f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4ed1f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4ed1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed1f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed1fc: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4ed1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4ed200: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ed200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ed204: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed208: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ed208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ed20c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ed20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ed210: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed214: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4ed214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ed218: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4ed218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed21c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ed21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ed220: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed224: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ed224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ed228: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4ed228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ed22c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x4ed22cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x4ed230: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ed230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ed234: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4ed234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4ed238: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4ed238u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ed23c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ed23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ed240: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed244: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4ed244u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ed248: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4ed248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4ed24c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4ed24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4ed250: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ed250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ed254: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4ed254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed258: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4ed258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4ed25c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ed25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ed260: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed264: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4ed264u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ed268: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4ed268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4ed26c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4ed26cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4ed270: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x4ed270u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x4ed274: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4ED274u;
    SET_GPR_U32(ctx, 31, 0x4ED27Cu);
    ctx->pc = 0x4ED278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED274u;
    // 0x4ed278: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4ED274u, 0x4ED27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED27Cu;
label_4ed27c:
    // 0x4ed27c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ed27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed280: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ed280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed284: 0x8645011c  lh          $a1, 0x11C($s2)
    ctx->pc = 0x4ed284u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x4ed288: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ed288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed28c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4ed28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ed290: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ed290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ed294: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed298: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed29c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ed29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ed2a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed2a4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ed2a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed2a8: 0x2442e000  addiu       $v0, $v0, -0x2000
    ctx->pc = 0x4ed2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x4ed2ac: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ed2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ed2b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed2b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ed2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ed2b8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ed2b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed2bc: 0x2c425000  sltiu       $v0, $v0, 0x5000
    ctx->pc = 0x4ed2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20480) ? 1 : 0);
    // 0x4ed2c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4ED2C0u;
    {
        const bool branch_taken_0x4ed2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED2C0u;
        // 0x4ed2c4: 0x26460168  addiu       $a2, $s2, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed2c0) {
            ctx->pc = 0x4ED2E0u;
            goto label_4ed2e0;
        }
    }
    ctx->pc = 0x4ED2C8u;
    // 0x4ed2c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ed2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed2cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ed2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ed2d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ed2d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed2d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4ed2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ed2d8: 0x813bcb8  j           func_4EF2E0
    ctx->pc = 0x4ED2D8u;
    ctx->pc = 0x4ED2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED2D8u;
    // 0x4ed2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    sub_004EF2E0_0x4ef2e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4ED2E0u;
label_4ed2e0:
    // 0x4ed2e0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ed2e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ed2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ed2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed2e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ed2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ed2ec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ed2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ed2f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ed2f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed2f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4ed2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ed2f8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4ed2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED2FCu;
        // 0x4ed300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED304u;
    // 0x4ed304: 0x0  nop
    ctx->pc = 0x4ed304u;
    // NOP
    ctx->pc = 0x4ed308u;
}
