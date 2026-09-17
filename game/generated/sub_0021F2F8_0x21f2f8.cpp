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

// Function: sub_0021F2F8
// Address: 0x21f2f8 - 0x21f370
void sub_0021F2F8_0x21f2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F2F8_0x21f2f8");
#endif

    switch (ctx->pc) {
        case 0x21f2f8u: goto label_21f2f8;
        case 0x21f2fcu: goto label_21f2fc;
        case 0x21f300u: goto label_21f300;
        case 0x21f304u: goto label_21f304;
        case 0x21f308u: goto label_21f308;
        case 0x21f30cu: goto label_21f30c;
        case 0x21f310u: goto label_21f310;
        case 0x21f314u: goto label_21f314;
        case 0x21f318u: goto label_21f318;
        case 0x21f31cu: goto label_21f31c;
        case 0x21f320u: goto label_21f320;
        case 0x21f324u: goto label_21f324;
        case 0x21f328u: goto label_21f328;
        case 0x21f32cu: goto label_21f32c;
        case 0x21f330u: goto label_21f330;
        case 0x21f334u: goto label_21f334;
        case 0x21f338u: goto label_21f338;
        case 0x21f33cu: goto label_21f33c;
        case 0x21f340u: goto label_21f340;
        case 0x21f344u: goto label_21f344;
        case 0x21f348u: goto label_21f348;
        case 0x21f34cu: goto label_21f34c;
        case 0x21f350u: goto label_21f350;
        case 0x21f354u: goto label_21f354;
        case 0x21f358u: goto label_21f358;
        case 0x21f35cu: goto label_21f35c;
        case 0x21f360u: goto label_21f360;
        case 0x21f364u: goto label_21f364;
        case 0x21f368u: goto label_21f368;
        case 0x21f36cu: goto label_21f36c;
        default: break;
    }

    ctx->pc = 0x21f2f8u;

label_21f2f8:
    // 0x21f2f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21f2fc:
    // 0x21f2fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21f300:
    // 0x21f300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21f304:
    // 0x21f304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_21f308:
    // 0x21f308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21f30c:
    // 0x21f30c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_21f310:
    // 0x21f310: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21f314:
    // 0x21f314: 0x8c42c1b0  lw          $v0, -0x3E50($v0)
    ctx->pc = 0x21f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951344)));
label_21f318:
    // 0x21f318: 0x40f809  jalr        $v0
label_21f31c:
    if (ctx->pc == 0x21F31Cu) {
        ctx->pc = 0x21F320u;
        goto label_21f320;
    }
    ctx->pc = 0x21F318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F320u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F318u, 0x21F320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F320u;
label_21f320:
    // 0x21f320: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x21f320u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
label_21f324:
    // 0x21f324: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21f324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21f328:
    // 0x21f328: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x21f328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
label_21f32c:
    // 0x21f32c: 0x24e72ce8  addiu       $a3, $a3, 0x2CE8
    ctx->pc = 0x21f32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11496));
label_21f330:
    // 0x21f330: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f334:
    // 0x21f334: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x21f334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_21f338:
    // 0x21f338: 0xc089248  jal         func_224920
label_21f33c:
    if (ctx->pc == 0x21F33Cu) {
        ctx->pc = 0x21F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F338u;
        // 0x21f33c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F340u;
        goto label_21f340;
    }
    ctx->pc = 0x21F338u;
    SET_GPR_U32(ctx, 31, 0x21F340u);
    ctx->pc = 0x21F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F338u;
    // 0x21f33c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x21F338u, 0x21F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F340u;
label_21f340:
    // 0x21f340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21f340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f344:
    // 0x21f344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21f344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21f348:
    // 0x21f348: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21f348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f34c:
    // 0x21f34c: 0xc04a151  jal         func_128544
label_21f350:
    if (ctx->pc == 0x21F350u) {
        ctx->pc = 0x21F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F34Cu;
        // 0x21f350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F354u;
        goto label_21f354;
    }
    ctx->pc = 0x21F34Cu;
    SET_GPR_U32(ctx, 31, 0x21F354u);
    ctx->pc = 0x21F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F34Cu;
    // 0x21f350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x21F34Cu, 0x21F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F354u;
label_21f354:
    // 0x21f354: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21f354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21f358:
    // 0x21f358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21f35c:
    // 0x21f35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f360:
    // 0x21f360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21f364:
    // 0x21f364: 0x3e00008  jr          $ra
label_21f368:
    if (ctx->pc == 0x21F368u) {
        ctx->pc = 0x21F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F364u;
        // 0x21f368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F36Cu;
        goto label_21f36c;
    }
    ctx->pc = 0x21F364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F364u;
        // 0x21f368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F36Cu;
label_21f36c:
    // 0x21f36c: 0x0  nop
    ctx->pc = 0x21f36cu;
    // NOP
    ctx->pc = 0x21f370u;
}
