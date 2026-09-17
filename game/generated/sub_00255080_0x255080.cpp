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

// Function: sub_00255080
// Address: 0x255080 - 0x255148
void sub_00255080_0x255080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255080_0x255080");
#endif

    switch (ctx->pc) {
        case 0x255094u: goto label_255094;
        case 0x255138u: goto label_255138;
        default: break;
    }

    ctx->pc = 0x255080u;

    // 0x255080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x255084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x255088: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x255088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25508c: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x25508Cu;
    SET_GPR_U32(ctx, 31, 0x255094u);
    ctx->pc = 0x255090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25508Cu;
    // 0x255090: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x25508Cu, 0x255094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255094u;
label_255094:
    // 0x255094: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x255094u;
    {
        const bool branch_taken_0x255094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255094u;
        // 0x255098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255094) {
            ctx->pc = 0x255138u;
            goto label_255138;
        }
    }
    ctx->pc = 0x25509Cu;
    // 0x25509c: 0x8602011e  lh          $v0, 0x11E($s0)
    ctx->pc = 0x25509cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 286)));
    // 0x2550a0: 0x8603011c  lh          $v1, 0x11C($s0)
    ctx->pc = 0x2550a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2550a4: 0x24940  sll         $t1, $v0, 5
    ctx->pc = 0x2550a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2550a8: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x2550a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x2550ac: 0x2508c970  addiu       $t0, $t0, -0x3690
    ctx->pc = 0x2550acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953328));
    // 0x2550b0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2550b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2550b4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2550B4u;
    {
        const bool branch_taken_0x2550b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2550B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550B4u;
        // 0x2550b8: 0x9607011c  lhu         $a3, 0x11C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550b4) {
            ctx->pc = 0x255104u;
            goto label_255104;
        }
    }
    ctx->pc = 0x2550BCu;
    // 0x2550bc: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x2550bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2550c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2550c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2550c4: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x2550c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x2550c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2550c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2550cc: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2550ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x2550d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2550d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2550d4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2550d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2550d8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2550d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2550dc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2550dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2550e0: 0x9442c778  lhu         $v0, -0x3888($v0)
    ctx->pc = 0x2550e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294952824)));
    // 0x2550e4: 0xa2050058  sb          $a1, 0x58($s0)
    ctx->pc = 0x2550e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x2550e8: 0xa602006a  sh          $v0, 0x6A($s0)
    ctx->pc = 0x2550e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x2550ec: 0xa606004e  sh          $a2, 0x4E($s0)
    ctx->pc = 0x2550ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 6));
    // 0x2550f0: 0xa607011c  sh          $a3, 0x11C($s0)
    ctx->pc = 0x2550f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 7));
    // 0x2550f4: 0xa6000068  sh          $zero, 0x68($s0)
    ctx->pc = 0x2550f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x2550f8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2550f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2550fc: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2550fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x255100: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x255100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
label_255104:
    // 0x255104: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x255104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x255108: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x255108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25510c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x25510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x255110: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x255110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x255114: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x255114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x255118: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x255118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x25511c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x25511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x255120: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x255120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x255124: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x255124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255128: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x255128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x25512c: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x25512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255130: 0xc0947f6  jal         func_251FD8
    ctx->pc = 0x255130u;
    SET_GPR_U32(ctx, 31, 0x255138u);
    ctx->pc = 0x255134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255130u;
    // 0x255134: 0xe6010050  swc1        $f1, 0x50($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x251FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FD8u, 0x255130u, 0x255138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255138u;
label_255138:
    // 0x255138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x255138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25513c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25513cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x255140: 0x3e00008  jr          $ra
    ctx->pc = 0x255140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255140u;
        // 0x255144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255148u;
}
