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

// Function: sub_004AD9B8
// Address: 0x4ad9b8 - 0x4ada60
void sub_004AD9B8_0x4ad9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD9B8_0x4ad9b8");
#endif

    switch (ctx->pc) {
        case 0x4ada24u: goto label_4ada24;
        default: break;
    }

    ctx->pc = 0x4ad9b8u;

    // 0x4ad9b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ad9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ad9c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad9c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad9c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ad9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ad9cc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x4ad9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4ad9d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ad9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ad9d4: 0xa6030034  sh          $v1, 0x34($s0)
    ctx->pc = 0x4ad9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad9d8: 0x86110008  lh          $s1, 0x8($s0)
    ctx->pc = 0x4ad9d8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4ad9dc: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4ad9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad9e0: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x4ad9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x4ad9e4: 0xa6020032  sh          $v0, 0x32($s0)
    ctx->pc = 0x4ad9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad9e8: 0xa600014a  sh          $zero, 0x14A($s0)
    ctx->pc = 0x4ad9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad9ec: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x4ad9ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4ad9f0: 0xa60001ba  sh          $zero, 0x1BA($s0)
    ctx->pc = 0x4ad9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad9f4: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x4ad9f4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x4ad9f8: 0xa60001bc  sh          $zero, 0x1BC($s0)
    ctx->pc = 0x4ad9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad9fc: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x4ad9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x4ada00: 0xa60001c2  sh          $zero, 0x1C2($s0)
    ctx->pc = 0x4ada00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ada04: 0xa6000136  sh          $zero, 0x136($s0)
    ctx->pc = 0x4ada04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ada08: 0xa6000138  sh          $zero, 0x138($s0)
    ctx->pc = 0x4ada08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ada0c: 0xa600013a  sh          $zero, 0x13A($s0)
    ctx->pc = 0x4ada0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 314), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ada10: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x4ada10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x4ada14: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x4ada14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x4ada18: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x4ada18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x4ada1c: 0xc12b8d6  jal         func_4AE358
    ctx->pc = 0x4ADA1Cu;
    SET_GPR_U32(ctx, 31, 0x4ADA24u);
    ctx->pc = 0x4ADA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADA1Cu;
    // 0x4ada20: 0xa6000036  sh          $zero, 0x36($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE358u, 0x4ADA1Cu, 0x4ADA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADA24u;
label_4ada24:
    // 0x4ada24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4ada24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4ada28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ada28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ada2c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ada2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ada30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ada30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ada34: 0xa6030148  sh          $v1, 0x148($s0)
    ctx->pc = 0x4ada34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 328), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ada38: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x4ada38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4ada3c: 0xa60401c0  sh          $a0, 0x1C0($s0)
    ctx->pc = 0x4ada3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 448), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ada40: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x4ada40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ada44: 0xa60301c4  sh          $v1, 0x1C4($s0)
    ctx->pc = 0x4ada44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 452), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ada48: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x4ada48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x4ada4c: 0xa60401c6  sh          $a0, 0x1C6($s0)
    ctx->pc = 0x4ada4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 454), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ada50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ada50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ada54: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADA54u;
        // 0x4ada58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADA5Cu;
    // 0x4ada5c: 0x0  nop
    ctx->pc = 0x4ada5cu;
    // NOP
    ctx->pc = 0x4ada60u;
}
