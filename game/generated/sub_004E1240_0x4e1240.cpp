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

// Function: sub_004E1240
// Address: 0x4e1240 - 0x4e12a0
void sub_004E1240_0x4e1240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1240_0x4e1240");
#endif

    switch (ctx->pc) {
        case 0x4e1254u: goto label_4e1254;
        case 0x4e125cu: goto label_4e125c;
        case 0x4e126cu: goto label_4e126c;
        case 0x4e1274u: goto label_4e1274;
        case 0x4e127cu: goto label_4e127c;
        default: break;
    }

    ctx->pc = 0x4e1240u;

    // 0x4e1240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e1240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e1244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e1244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e1248: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e1248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e124c: 0xc13873e  jal         func_4E1CF8
    ctx->pc = 0x4E124Cu;
    SET_GPR_U32(ctx, 31, 0x4E1254u);
    ctx->pc = 0x4E1250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E124Cu;
    // 0x4e1250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1CF8u, 0x4E124Cu, 0x4E1254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1254u;
label_4e1254:
    // 0x4e1254: 0xc12dce0  jal         func_4B7380
    ctx->pc = 0x4E1254u;
    SET_GPR_U32(ctx, 31, 0x4E125Cu);
    ctx->pc = 0x4E1258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1254u;
    // 0x4e1258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7380u, 0x4E1254u, 0x4E125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E125Cu;
label_4e125c:
    // 0x4e125c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E125Cu;
    {
        const bool branch_taken_0x4e125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E125Cu;
        // 0x4e1260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e125c) {
            ctx->pc = 0x4E1290u;
            goto label_4e1290;
        }
    }
    ctx->pc = 0x4E1264u;
    // 0x4e1264: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4E1264u;
    SET_GPR_U32(ctx, 31, 0x4E126Cu);
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4E1264u, 0x4E126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E126Cu;
label_4e126c:
    // 0x4e126c: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4E126Cu;
    SET_GPR_U32(ctx, 31, 0x4E1274u);
    ctx->pc = 0x4E1270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E126Cu;
    // 0x4e1270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4E126Cu, 0x4E1274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1274u;
label_4e1274:
    // 0x4e1274: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E1274u;
    SET_GPR_U32(ctx, 31, 0x4E127Cu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E1274u, 0x4E127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E127Cu;
label_4e127c:
    // 0x4e127c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e127cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e1280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e1280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e1284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e1288: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E1288u;
    ctx->pc = 0x4E128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1288u;
    // 0x4e128c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E1290u;
label_4e1290:
    // 0x4e1290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e1290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e1294: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e1294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e1298: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1298u;
        // 0x4e129c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E12A0u;
}
