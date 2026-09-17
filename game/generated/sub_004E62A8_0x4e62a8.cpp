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

// Function: sub_004E62A8
// Address: 0x4e62a8 - 0x4e6378
void sub_004E62A8_0x4e62a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E62A8_0x4e62a8");
#endif

    switch (ctx->pc) {
        case 0x4e62d4u: goto label_4e62d4;
        case 0x4e62fcu: goto label_4e62fc;
        case 0x4e631cu: goto label_4e631c;
        case 0x4e632cu: goto label_4e632c;
        case 0x4e6334u: goto label_4e6334;
        default: break;
    }

    ctx->pc = 0x4e62a8u;

    // 0x4e62a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e62a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e62ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e62acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e62b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e62b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e62b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e62b8: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4e62b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4e62bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e62bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e62c0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e62c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e62c4: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4E62C4u;
    {
        const bool branch_taken_0x4e62c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e62c4) {
            ctx->pc = 0x4E6314u;
            goto label_4e6314;
        }
    }
    ctx->pc = 0x4E62CCu;
    // 0x4e62cc: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E62CCu;
    SET_GPR_U32(ctx, 31, 0x4E62D4u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E62CCu, 0x4E62D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E62D4u;
label_4e62d4:
    // 0x4e62d4: 0x240204c9  addiu       $v0, $zero, 0x4C9
    ctx->pc = 0x4e62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1225));
    // 0x4e62d8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4e62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4e62dc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4e62dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e62e0: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4e62e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e62e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e62e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e62e8: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4e62e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e62ec: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e62ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e62f0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e62f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e62f4: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E62F4u;
    SET_GPR_U32(ctx, 31, 0x4E62FCu);
    ctx->pc = 0x4E62F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E62F4u;
    // 0x4e62f8: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E62F4u, 0x4E62FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E62FCu;
label_4e62fc:
    // 0x4e62fc: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x4e62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4e6300: 0x240404ca  addiu       $a0, $zero, 0x4CA
    ctx->pc = 0x4e6300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1226));
    // 0x4e6304: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e6304u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e6308: 0xa4440160  sh          $a0, 0x160($v0)
    ctx->pc = 0x4e6308u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e630c: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4e630cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4e6310: 0xa444015e  sh          $a0, 0x15E($v0)
    ctx->pc = 0x4e6310u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 4));
label_4e6314:
    // 0x4e6314: 0xc12564a  jal         func_495928
    ctx->pc = 0x4E6314u;
    SET_GPR_U32(ctx, 31, 0x4E631Cu);
    ctx->pc = 0x4E6318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6314u;
    // 0x4e6318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4E6314u, 0x4E631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E631Cu;
label_4e631c:
    // 0x4e631c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4E631Cu;
    {
        const bool branch_taken_0x4e631c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E631Cu;
        // 0x4e6320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e631c) {
            ctx->pc = 0x4E6360u;
            goto label_4e6360;
        }
    }
    ctx->pc = 0x4E6324u;
    // 0x4e6324: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4E6324u;
    SET_GPR_U32(ctx, 31, 0x4E632Cu);
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4E6324u, 0x4E632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E632Cu;
label_4e632c:
    // 0x4e632c: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4E632Cu;
    SET_GPR_U32(ctx, 31, 0x4E6334u);
    ctx->pc = 0x4E6330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E632Cu;
    // 0x4e6330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4E632Cu, 0x4E6334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6334u;
label_4e6334:
    // 0x4e6334: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4e6334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e6338: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x4e6338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x4e633c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x4e633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4e6340: 0xa602011c  sh          $v0, 0x11C($s0)
    ctx->pc = 0x4e6340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6348: 0xa6030120  sh          $v1, 0x120($s0)
    ctx->pc = 0x4e6348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e634c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e634cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e6354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6358: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4E6358u;
    ctx->pc = 0x4E635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6358u;
    // 0x4e635c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4E6360u;
label_4e6360:
    // 0x4e6360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e6364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e6368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e636c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E636Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E636Cu;
        // 0x4e6370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E636Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6374u;
    // 0x4e6374: 0x0  nop
    ctx->pc = 0x4e6374u;
    // NOP
    ctx->pc = 0x4e6378u;
}
