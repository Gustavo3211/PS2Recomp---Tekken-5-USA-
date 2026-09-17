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

// Function: sub_002F58C0
// Address: 0x2f58c0 - 0x2f5a88
void sub_002F58C0_0x2f58c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F58C0_0x2f58c0");
#endif

    switch (ctx->pc) {
        case 0x2f58f4u: goto label_2f58f4;
        case 0x2f5954u: goto label_2f5954;
        case 0x2f5960u: goto label_2f5960;
        case 0x2f598cu: goto label_2f598c;
        case 0x2f59a0u: goto label_2f59a0;
        case 0x2f59b8u: goto label_2f59b8;
        case 0x2f59d4u: goto label_2f59d4;
        case 0x2f59dcu: goto label_2f59dc;
        case 0x2f5a60u: goto label_2f5a60;
        default: break;
    }

    ctx->pc = 0x2f58c0u;

    // 0x2f58c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f58c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f58c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f58c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f58c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f58c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f58ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f58d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f58d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f58d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f58d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f58e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f58e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f58e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2f58e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f58e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f58ec: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2F58ECu;
    SET_GPR_U32(ctx, 31, 0x2F58F4u);
    ctx->pc = 0x2F58F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F58ECu;
    // 0x2f58f0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2F58ECu, 0x2F58F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F58F4u;
label_2f58f4:
    // 0x2f58f4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f58f8: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2f58f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f58fc: 0x26460140  addiu       $a2, $s2, 0x140
    ctx->pc = 0x2f58fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x2f5900: 0x26540158  addiu       $s4, $s2, 0x158
    ctx->pc = 0x2f5900u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    // 0x2f5904: 0x26530148  addiu       $s3, $s2, 0x148
    ctx->pc = 0x2f5904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
    // 0x2f5908: 0x24630eb0  addiu       $v1, $v1, 0xEB0
    ctx->pc = 0x2f5908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3760));
    // 0x2f590c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2f590cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2f5910: 0x264700b8  addiu       $a3, $s2, 0xB8
    ctx->pc = 0x2f5910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
    // 0x2f5914: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f5914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2f5918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f591c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f591cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2f5920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5924: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2f5924u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2f5928: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2f5928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2f592c: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x2f592cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x2f5930: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2f5930u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x2f5934: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x2f5934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x2f5938: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x2f5938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x2f593c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f5940: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2f5940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2f5944: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x2f5944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x2f5948: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f5948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2f594c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2F594Cu;
    SET_GPR_U32(ctx, 31, 0x2F5954u);
    ctx->pc = 0x2F5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F594Cu;
    // 0x2f5950: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F594Cu, 0x2F5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5954u;
label_2f5954:
    // 0x2f5954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5958: 0xc0bd2dc  jal         func_2F4B70
    ctx->pc = 0x2F5958u;
    SET_GPR_U32(ctx, 31, 0x2F5960u);
    ctx->pc = 0x2F595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5958u;
    // 0x2f595c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B70u, 0x2F5958u, 0x2F5960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5960u;
label_2f5960:
    // 0x2f5960: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2f5960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2f5964: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f5964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2f5968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f596c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2f596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f5970: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x2f5970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x2f5974: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f5974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f5978: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2f5978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2f597c: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2f597cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2f5980: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2f5980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f5984: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2F5984u;
    SET_GPR_U32(ctx, 31, 0x2F598Cu);
    ctx->pc = 0x2F5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5984u;
    // 0x2f5988: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2F5984u, 0x2F598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F598Cu;
label_2f598c:
    // 0x2f598c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5994: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2f5994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f5998: 0xc0bb89a  jal         func_2EE268
    ctx->pc = 0x2F5998u;
    SET_GPR_U32(ctx, 31, 0x2F59A0u);
    ctx->pc = 0x2F599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5998u;
    // 0x2f599c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE268u, 0x2F5998u, 0x2F59A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59A0u;
label_2f59a0:
    // 0x2f59a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f59a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f59a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f59a8: 0xa2420156  sb          $v0, 0x156($s2)
    ctx->pc = 0x2f59a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 342), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f59ac: 0xa2420154  sb          $v0, 0x154($s2)
    ctx->pc = 0x2f59acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 340), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f59b0: 0xc0bd6d0  jal         func_2F5B40
    ctx->pc = 0x2F59B0u;
    SET_GPR_U32(ctx, 31, 0x2F59B8u);
    ctx->pc = 0x2F59B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59B0u;
    // 0x2f59b4: 0xa2420155  sb          $v0, 0x155($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 341), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5B40u, 0x2F59B0u, 0x2F59B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59B8u;
label_2f59b8:
    // 0x2f59b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f59bc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f59bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2f59c0: 0xa2420157  sb          $v0, 0x157($s2)
    ctx->pc = 0x2f59c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 343), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f59c4: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2f59c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2f59c8: 0xae430108  sw          $v1, 0x108($s2)
    ctx->pc = 0x2f59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 3));
    // 0x2f59cc: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2F59CCu;
    SET_GPR_U32(ctx, 31, 0x2F59D4u);
    ctx->pc = 0x2F59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59CCu;
    // 0x2f59d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2F59CCu, 0x2F59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59D4u;
label_2f59d4:
    // 0x2f59d4: 0xc0b77ce  jal         func_2DDF38
    ctx->pc = 0x2F59D4u;
    SET_GPR_U32(ctx, 31, 0x2F59DCu);
    ctx->pc = 0x2F59D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59D4u;
    // 0x2f59d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF38u, 0x2F59D4u, 0x2F59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59DCu;
label_2f59dc:
    // 0x2f59dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f59dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f59e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f59e4: 0x10640014  beq         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F59E4u;
    {
        const bool branch_taken_0x2f59e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59E4u;
        // 0x2f59e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59e4) {
            ctx->pc = 0x2F5A38u;
            goto label_2f5a38;
        }
    }
    ctx->pc = 0x2F59ECu;
    // 0x2f59ec: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2f59ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f59f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F59F0u;
    {
        const bool branch_taken_0x2f59f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59F0u;
        // 0x2f59f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59f0) {
            ctx->pc = 0x2F5A08u;
            goto label_2f5a08;
        }
    }
    ctx->pc = 0x2F59F8u;
    // 0x2f59f8: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F59F8u;
    {
        const bool branch_taken_0x2f59f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f59f8) {
            ctx->pc = 0x2F59FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F59F8u;
            // 0x2f59fc: 0xae400108  sw          $zero, 0x108($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5A3Cu;
            goto label_2f5a3c;
        }
    }
    ctx->pc = 0x2F5A00u;
    // 0x2f5a00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F5A00u;
    {
        const bool branch_taken_0x2f5a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A00u;
        // 0x2f5a04: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a00) {
            ctx->pc = 0x2F5A60u;
            goto label_2f5a60;
        }
    }
    ctx->pc = 0x2F5A08u;
label_2f5a08:
    // 0x2f5a08: 0x50750007  beql        $v1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5A08u;
    {
        const bool branch_taken_0x2f5a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x2f5a08) {
            ctx->pc = 0x2F5A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5A08u;
            // 0x2f5a0c: 0x82430156  lb          $v1, 0x156($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 342)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5A28u;
            goto label_2f5a28;
        }
    }
    ctx->pc = 0x2F5A10u;
    // 0x2f5a10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f5a14: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5A14u;
    {
        const bool branch_taken_0x2f5a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5a14) {
            ctx->pc = 0x2F5A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5A14u;
            // 0x2f5a18: 0x82430157  lb          $v1, 0x157($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 343)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5A30u;
            goto label_2f5a30;
        }
    }
    ctx->pc = 0x2F5A1Cu;
    // 0x2f5a1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F5A1Cu;
    {
        const bool branch_taken_0x2f5a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A1Cu;
        // 0x2f5a20: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a1c) {
            ctx->pc = 0x2F5A60u;
            goto label_2f5a60;
        }
    }
    ctx->pc = 0x2F5A24u;
    // 0x2f5a24: 0x0  nop
    ctx->pc = 0x2f5a24u;
    // NOP
label_2f5a28:
    // 0x2f5a28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5A28u;
    {
        const bool branch_taken_0x2f5a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A28u;
        // 0x2f5a2c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a28) {
            ctx->pc = 0x2F5A34u;
            goto label_2f5a34;
        }
    }
    ctx->pc = 0x2F5A30u;
label_2f5a30:
    // 0x2f5a30: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2f5a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a34:
    // 0x2f5a34: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2f5a34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2f5a38:
    // 0x2f5a38: 0xae420108  sw          $v0, 0x108($s2)
    ctx->pc = 0x2f5a38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 2));
label_2f5a3c:
    // 0x2f5a3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5A3Cu;
    {
        const bool branch_taken_0x2f5a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A3Cu;
        // 0x2f5a40: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a3c) {
            ctx->pc = 0x2F5A60u;
            goto label_2f5a60;
        }
    }
    ctx->pc = 0x2F5A44u;
    // 0x2f5a44: 0x0  nop
    ctx->pc = 0x2f5a44u;
    // NOP
    // 0x2f5a48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2f5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2f5a4c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2f5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2f5a50: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2f5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2f5a54: 0x24840700  addiu       $a0, $a0, 0x700
    ctx->pc = 0x2f5a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x2f5a58: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2F5A58u;
    SET_GPR_U32(ctx, 31, 0x2F5A60u);
    ctx->pc = 0x2F5A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A58u;
    // 0x2f5a5c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2F5A58u, 0x2F5A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A60u;
label_2f5a60:
    // 0x2f5a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f5a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f5a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f5a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5a6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f5a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f5a70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f5a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5a74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f5a74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f5a78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f5a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A7Cu;
        // 0x2f5a80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5A84u;
    // 0x2f5a84: 0x0  nop
    ctx->pc = 0x2f5a84u;
    // NOP
    ctx->pc = 0x2f5a88u;
}
