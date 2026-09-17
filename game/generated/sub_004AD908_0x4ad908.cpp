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

// Function: sub_004AD908
// Address: 0x4ad908 - 0x4ad9b8
void sub_004AD908_0x4ad908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD908_0x4ad908");
#endif

    switch (ctx->pc) {
        case 0x4ad974u: goto label_4ad974;
        default: break;
    }

    ctx->pc = 0x4ad908u;

    // 0x4ad908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad90c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ad90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ad910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad918: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4ad918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ad91c: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x4ad91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4ad920: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ad920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ad924: 0xa604002c  sh          $a0, 0x2C($s0)
    ctx->pc = 0x4ad924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ad928: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x4ad928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad92c: 0xa6040024  sh          $a0, 0x24($s0)
    ctx->pc = 0x4ad92cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ad930: 0xa6040028  sh          $a0, 0x28($s0)
    ctx->pc = 0x4ad930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ad934: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x4ad934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad938: 0xa60001ba  sh          $zero, 0x1BA($s0)
    ctx->pc = 0x4ad938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad93c: 0xa60001bc  sh          $zero, 0x1BC($s0)
    ctx->pc = 0x4ad93cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad940: 0xa60001c2  sh          $zero, 0x1C2($s0)
    ctx->pc = 0x4ad940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad944: 0xa600014a  sh          $zero, 0x14A($s0)
    ctx->pc = 0x4ad944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad948: 0xa6000136  sh          $zero, 0x136($s0)
    ctx->pc = 0x4ad948u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad94c: 0xa6000138  sh          $zero, 0x138($s0)
    ctx->pc = 0x4ad94cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad950: 0xa600013a  sh          $zero, 0x13A($s0)
    ctx->pc = 0x4ad950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 314), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad954: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x4ad954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x4ad958: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x4ad958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x4ad95c: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x4ad95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x4ad960: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x4ad960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad964: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x4ad964u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad968: 0xa600002a  sh          $zero, 0x2A($s0)
    ctx->pc = 0x4ad968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad96c: 0xc12b8d6  jal         func_4AE358
    ctx->pc = 0x4AD96Cu;
    SET_GPR_U32(ctx, 31, 0x4AD974u);
    ctx->pc = 0x4AD970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD96Cu;
    // 0x4ad970: 0xa600000e  sh          $zero, 0xE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE358u, 0x4AD96Cu, 0x4AD974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD974u;
label_4ad974:
    // 0x4ad974: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x4ad974u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4ad978: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ad978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ad97c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x4ad97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x4ad980: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ad980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ad984: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x4ad984u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x4ad988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ad988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ad98c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4ad98cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ad990: 0xa6040148  sh          $a0, 0x148($s0)
    ctx->pc = 0x4ad990u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 328), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ad994: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4ad994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4ad998: 0xa60301c0  sh          $v1, 0x1C0($s0)
    ctx->pc = 0x4ad998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 448), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad99c: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x4ad99cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ad9a0: 0xa60401c4  sh          $a0, 0x1C4($s0)
    ctx->pc = 0x4ad9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 452), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ad9a4: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x4ad9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x4ad9a8: 0xa60301c6  sh          $v1, 0x1C6($s0)
    ctx->pc = 0x4ad9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 454), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD9B0u;
        // 0x4ad9b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD9B8u;
}
