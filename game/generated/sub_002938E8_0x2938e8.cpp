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

// Function: sub_002938E8
// Address: 0x2938e8 - 0x293988
void sub_002938E8_0x2938e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002938E8_0x2938e8");
#endif

    switch (ctx->pc) {
        case 0x293914u: goto label_293914;
        case 0x29392cu: goto label_29392c;
        case 0x293954u: goto label_293954;
        case 0x29396cu: goto label_29396c;
        default: break;
    }

    ctx->pc = 0x2938e8u;

    // 0x2938e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2938e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2938ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2938ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2938f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2938f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2938f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2938f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2938f8: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x2938f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x2938fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2938fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x293900: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x293900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x293904: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x293904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x293908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29390c: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x29390Cu;
    SET_GPR_U32(ctx, 31, 0x293914u);
    ctx->pc = 0x293910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29390Cu;
    // 0x293910: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x29390Cu, 0x293914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293914u;
label_293914:
    // 0x293914: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x293914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x293918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29391c: 0x2442e1e8  addiu       $v0, $v0, -0x1E18
    ctx->pc = 0x29391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959592));
    // 0x293920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293924: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293924u;
    SET_GPR_U32(ctx, 31, 0x29392Cu);
    ctx->pc = 0x293928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293924u;
    // 0x293928: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293924u, 0x29392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29392Cu;
label_29392c:
    // 0x29392c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29392cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x293930: 0x2463b570  addiu       $v1, $v1, -0x4A90
    ctx->pc = 0x293930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948208));
    // 0x293934: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x293934u;
    {
        const bool branch_taken_0x293934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293934u;
        // 0x293938: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293934) {
            ctx->pc = 0x293970u;
            goto label_293970;
        }
    }
    ctx->pc = 0x29393Cu;
    // 0x29393c: 0x0  nop
    ctx->pc = 0x29393cu;
    // NOP
    // 0x293940: 0x2622d620  addiu       $v0, $s1, -0x29E0
    ctx->pc = 0x293940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956576));
    // 0x293944: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x293944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x293948: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x293948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x29394c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x29394Cu;
    SET_GPR_U32(ctx, 31, 0x293954u);
    ctx->pc = 0x293950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29394Cu;
    // 0x293950: 0x2484fe7c  addiu       $a0, $a0, -0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966908));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x29394Cu, 0x293954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293954u;
label_293954:
    // 0x293954: 0x0  nop
    ctx->pc = 0x293954u;
    // NOP
    // 0x293958: 0x2622d620  addiu       $v0, $s1, -0x29E0
    ctx->pc = 0x293958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956576));
    // 0x29395c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x29395cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x293960: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x293960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x293964: 0xc048b90  jal         func_122E40
    ctx->pc = 0x293964u;
    SET_GPR_U32(ctx, 31, 0x29396Cu);
    ctx->pc = 0x293968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293964u;
    // 0x293968: 0x2484fe8c  addiu       $a0, $a0, -0x174 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966924));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x293964u, 0x29396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29396Cu;
label_29396c:
    // 0x29396c: 0x0  nop
    ctx->pc = 0x29396cu;
    // NOP
label_293970:
    // 0x293970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x293970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x293974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x293978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29397c: 0x3e00008  jr          $ra
    ctx->pc = 0x29397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29397Cu;
        // 0x293980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29397Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293984u;
    // 0x293984: 0x0  nop
    ctx->pc = 0x293984u;
    // NOP
    ctx->pc = 0x293988u;
}
