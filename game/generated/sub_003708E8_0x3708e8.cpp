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

// Function: sub_003708E8
// Address: 0x3708e8 - 0x370980
void sub_003708E8_0x3708e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003708E8_0x3708e8");
#endif

    switch (ctx->pc) {
        case 0x37090cu: goto label_37090c;
        case 0x370924u: goto label_370924;
        default: break;
    }

    ctx->pc = 0x3708e8u;

    // 0x3708e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3708e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3708ec: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3708ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3708f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3708f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3708f4: 0x245074a0  addiu       $s0, $v0, 0x74A0
    ctx->pc = 0x3708f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x3708f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3708f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D74A0u));
    // 0x3708fc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3708FCu;
    {
        const bool branch_taken_0x3708fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708FCu;
        // 0x370900: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708fc) {
            ctx->pc = 0x370924u;
            goto label_370924;
        }
    }
    ctx->pc = 0x370904u;
    // 0x370904: 0xc0dc206  jal         func_370818
    ctx->pc = 0x370904u;
    SET_GPR_U32(ctx, 31, 0x37090Cu);
    ctx->pc = 0x370818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370818u, 0x370904u, 0x37090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37090Cu;
label_37090c:
    // 0x37090c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37090cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370910: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370914: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x370914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
    // 0x370918: 0x24c67370  addiu       $a2, $a2, 0x7370
    ctx->pc = 0x370918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29552));
    // 0x37091c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x37091Cu;
    SET_GPR_U32(ctx, 31, 0x370924u);
    ctx->pc = 0x370920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37091Cu;
    // 0x370920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x37091Cu, 0x370924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370924u;
label_370924:
    // 0x370924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37092c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370930: 0x3e00008  jr          $ra
    ctx->pc = 0x370930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370930u;
        // 0x370934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370938u;
    // 0x370938: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37093c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x37093cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x370940: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x370940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x370944: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x370944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x370948: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x370948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x37094c: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x37094cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x370950: 0x24c6f4d0  addiu       $a2, $a2, -0xB30
    ctx->pc = 0x370950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964432));
    // 0x370954: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x370954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370958: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x370958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x37095c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x37095cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x370960: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x370960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x370964: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x370964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x370968: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x370968u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x37096c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x37096cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x370970: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x370970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x370974: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370978: 0x3e00008  jr          $ra
    ctx->pc = 0x370978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370978u;
        // 0x37097c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370980u;
}
