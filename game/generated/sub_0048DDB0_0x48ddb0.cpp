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

// Function: sub_0048DDB0
// Address: 0x48ddb0 - 0x48deb8
void sub_0048DDB0_0x48ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DDB0_0x48ddb0");
#endif

    switch (ctx->pc) {
        case 0x48dddcu: goto label_48dddc;
        case 0x48dde4u: goto label_48dde4;
        case 0x48ddf0u: goto label_48ddf0;
        case 0x48ddf8u: goto label_48ddf8;
        case 0x48de00u: goto label_48de00;
        case 0x48de08u: goto label_48de08;
        case 0x48de10u: goto label_48de10;
        case 0x48de18u: goto label_48de18;
        case 0x48de7cu: goto label_48de7c;
        case 0x48de84u: goto label_48de84;
        case 0x48de8cu: goto label_48de8c;
        case 0x48de94u: goto label_48de94;
        case 0x48de9cu: goto label_48de9c;
        default: break;
    }

    ctx->pc = 0x48ddb0u;

    // 0x48ddb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ddb4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ddb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48ddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48ddbc: 0x2450d680  addiu       $s0, $v0, -0x2980
    ctx->pc = 0x48ddbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48ddc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48ddc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48ddc4: 0x26030096  addiu       $v1, $s0, 0x96
    ctx->pc = 0x48ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 150));
    // 0x48ddc8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x48ddc8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D716u));
    // 0x48ddcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48DDCCu;
    {
        const bool branch_taken_0x48ddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ddcc) {
            ctx->pc = 0x48DDDCu;
            goto label_48dddc;
        }
    }
    ctx->pc = 0x48DDD4u;
    // 0x48ddd4: 0xc122fbe  jal         func_48BEF8
    ctx->pc = 0x48DDD4u;
    SET_GPR_U32(ctx, 31, 0x48DDDCu);
    ctx->pc = 0x48DDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DDD4u;
    // 0x48ddd8: 0xa4600000  sh          $zero, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BEF8u, 0x48DDD4u, 0x48DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DDDCu;
label_48dddc:
    // 0x48dddc: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x48DDDCu;
    SET_GPR_U32(ctx, 31, 0x48DDE4u);
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x48DDDCu, 0x48DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DDE4u;
label_48dde4:
    // 0x48dde4: 0xa600220c  sh          $zero, 0x220C($s0)
    ctx->pc = 0x48dde4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8716), (uint16_t)GPR_U32(ctx, 0));
    // 0x48dde8: 0xc124c72  jal         func_4931C8
    ctx->pc = 0x48DDE8u;
    SET_GPR_U32(ctx, 31, 0x48DDF0u);
    ctx->pc = 0x48DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DDE8u;
    // 0x48ddec: 0xa600220e  sh          $zero, 0x220E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8718), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4931C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931C8u, 0x48DDE8u, 0x48DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DDF0u;
label_48ddf0:
    // 0x48ddf0: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x48DDF0u;
    SET_GPR_U32(ctx, 31, 0x48DDF8u);
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x48DDF0u, 0x48DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DDF8u;
label_48ddf8:
    // 0x48ddf8: 0xc124910  jal         func_492440
    ctx->pc = 0x48DDF8u;
    SET_GPR_U32(ctx, 31, 0x48DE00u);
    ctx->pc = 0x48DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DDF8u;
    // 0x48ddfc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x48DDF8u, 0x48DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE00u;
label_48de00:
    // 0x48de00: 0xc124910  jal         func_492440
    ctx->pc = 0x48DE00u;
    SET_GPR_U32(ctx, 31, 0x48DE08u);
    ctx->pc = 0x48DE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DE00u;
    // 0x48de04: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x48DE00u, 0x48DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE08u;
label_48de08:
    // 0x48de08: 0xc12211a  jal         func_488468
    ctx->pc = 0x48DE08u;
    SET_GPR_U32(ctx, 31, 0x48DE10u);
    ctx->pc = 0x488468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488468u, 0x48DE08u, 0x48DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE10u;
label_48de10:
    // 0x48de10: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x48DE10u;
    SET_GPR_U32(ctx, 31, 0x48DE18u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48DE10u, 0x48DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE18u;
label_48de18:
    // 0x48de18: 0x240c018a  addiu       $t4, $zero, 0x18A
    ctx->pc = 0x48de18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
    // 0x48de1c: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x48de1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x48de20: 0x240693c0  addiu       $a2, $zero, -0x6C40
    ctx->pc = 0x48de20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294939584));
    // 0x48de24: 0x2407f640  addiu       $a3, $zero, -0x9C0
    ctx->pc = 0x48de24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964800));
    // 0x48de28: 0x24087480  addiu       $t0, $zero, 0x7480
    ctx->pc = 0x48de28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29824));
    // 0x48de2c: 0x24090180  addiu       $t1, $zero, 0x180
    ctx->pc = 0x48de2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x48de30: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x48de30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x48de34: 0x240b00a0  addiu       $t3, $zero, 0xA0
    ctx->pc = 0x48de34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x48de38: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x48de38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x48de3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48de40: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x48de40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x48de44: 0xa444001e  sh          $a0, 0x1E($v0)
    ctx->pc = 0x48de44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 4));
    // 0x48de48: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x48de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x48de4c: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x48de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x48de50: 0xa44c0030  sh          $t4, 0x30($v0)
    ctx->pc = 0x48de50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 12));
    // 0x48de54: 0xa4460032  sh          $a2, 0x32($v0)
    ctx->pc = 0x48de54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 6));
    // 0x48de58: 0xa4470034  sh          $a3, 0x34($v0)
    ctx->pc = 0x48de58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 7));
    // 0x48de5c: 0xa448003c  sh          $t0, 0x3C($v0)
    ctx->pc = 0x48de5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 8));
    // 0x48de60: 0xa4490038  sh          $t1, 0x38($v0)
    ctx->pc = 0x48de60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 9));
    // 0x48de64: 0xa44a0040  sh          $t2, 0x40($v0)
    ctx->pc = 0x48de64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 10));
    // 0x48de68: 0xa44b0044  sh          $t3, 0x44($v0)
    ctx->pc = 0x48de68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 11));
    // 0x48de6c: 0xa44c0020  sh          $t4, 0x20($v0)
    ctx->pc = 0x48de6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 12));
    // 0x48de70: 0xa440002e  sh          $zero, 0x2E($v0)
    ctx->pc = 0x48de70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x48de74: 0xc124136  jal         func_4904D8
    ctx->pc = 0x48DE74u;
    SET_GPR_U32(ctx, 31, 0x48DE7Cu);
    ctx->pc = 0x48DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DE74u;
    // 0x48de78: 0xa4400036  sh          $zero, 0x36($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904D8u, 0x48DE74u, 0x48DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE7Cu;
label_48de7c:
    // 0x48de7c: 0xc124136  jal         func_4904D8
    ctx->pc = 0x48DE7Cu;
    SET_GPR_U32(ctx, 31, 0x48DE84u);
    ctx->pc = 0x48DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DE7Cu;
    // 0x48de80: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904D8u, 0x48DE7Cu, 0x48DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE84u;
label_48de84:
    // 0x48de84: 0xc123240  jal         func_48C900
    ctx->pc = 0x48DE84u;
    SET_GPR_U32(ctx, 31, 0x48DE8Cu);
    ctx->pc = 0x48C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C900u, 0x48DE84u, 0x48DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE8Cu;
label_48de8c:
    // 0x48de8c: 0xc123c54  jal         func_48F150
    ctx->pc = 0x48DE8Cu;
    SET_GPR_U32(ctx, 31, 0x48DE94u);
    ctx->pc = 0x48F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F150u, 0x48DE8Cu, 0x48DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE94u;
label_48de94:
    // 0x48de94: 0xc124620  jal         func_491880
    ctx->pc = 0x48DE94u;
    SET_GPR_U32(ctx, 31, 0x48DE9Cu);
    ctx->pc = 0x48DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DE94u;
    // 0x48de98: 0xa600001a  sh          $zero, 0x1A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x48DE94u, 0x48DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DE9Cu;
label_48de9c:
    // 0x48de9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48de9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dea0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48dea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48dea4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48dea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48dea8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48dea8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48deac: 0xa420e820  sh          $zero, -0x17E0($at)
    ctx->pc = 0x48deacu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 0));
    // 0x48deb0: 0x3e00008  jr          $ra
    ctx->pc = 0x48DEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DEB0u;
        // 0x48deb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DEB8u;
}
