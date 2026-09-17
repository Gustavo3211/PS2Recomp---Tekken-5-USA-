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

// Function: sub_003578B8
// Address: 0x3578b8 - 0x35799c
void sub_003578B8_0x3578b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003578B8_0x3578b8");
#endif

    switch (ctx->pc) {
        case 0x3578d8u: goto label_3578d8;
        case 0x3578ecu: goto label_3578ec;
        case 0x357920u: goto label_357920;
        case 0x357954u: goto label_357954;
        case 0x357980u: goto label_357980;
        default: break;
    }

    ctx->pc = 0x3578b8u;

    // 0x3578b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3578b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3578bc: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3578bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3578c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3578c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3578c4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3578c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578c8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3578c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3578cc: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3578ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3578d0: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3578D0u;
    SET_GPR_U32(ctx, 31, 0x3578D8u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3578D0u, 0x3578D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3578D8u;
label_3578d8:
    // 0x3578d8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3578d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3578dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3578dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3578e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3578e4: 0xc0d5da2  jal         func_357688
    ctx->pc = 0x3578E4u;
    SET_GPR_U32(ctx, 31, 0x3578ECu);
    ctx->pc = 0x357688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357688u, 0x3578E4u, 0x3578ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3578ECu;
label_3578ec:
    // 0x3578ec: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3578ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3578f0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3578f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3578f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3578F4u;
    {
        const bool branch_taken_0x3578f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3578f4) {
            ctx->pc = 0x357904u;
            goto label_357904;
        }
    }
    ctx->pc = 0x3578FCu;
    // 0x3578fc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3578FCu;
    {
        const bool branch_taken_0x3578fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3578fc) {
            ctx->pc = 0x357974u;
            goto label_357974;
        }
    }
    ctx->pc = 0x357904u;
label_357904:
    // 0x357904: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x357904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x357908: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x357908u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x35790c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x35790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x357910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x357910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357914: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x357914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357918: 0xc0d5da2  jal         func_357688
    ctx->pc = 0x357918u;
    SET_GPR_U32(ctx, 31, 0x357920u);
    ctx->pc = 0x357688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357688u, 0x357918u, 0x357920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357920u;
label_357920:
    // 0x357920: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x357920u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x357924: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x357924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x357928: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357928u;
    {
        const bool branch_taken_0x357928 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x357928) {
            ctx->pc = 0x357938u;
            goto label_357938;
        }
    }
    ctx->pc = 0x357930u;
    // 0x357930: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x357930u;
    {
        const bool branch_taken_0x357930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357930) {
            ctx->pc = 0x357974u;
            goto label_357974;
        }
    }
    ctx->pc = 0x357938u;
label_357938:
    // 0x357938: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x357938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35793c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35793cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357940: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x357940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x357944: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x357944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x357948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35794c: 0xc0d5da2  jal         func_357688
    ctx->pc = 0x35794Cu;
    SET_GPR_U32(ctx, 31, 0x357954u);
    ctx->pc = 0x357688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357688u, 0x35794Cu, 0x357954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357954u;
label_357954:
    // 0x357954: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x357954u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x357958: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x357958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35795c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35795Cu;
    {
        const bool branch_taken_0x35795c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35795c) {
            ctx->pc = 0x35796Cu;
            goto label_35796c;
        }
    }
    ctx->pc = 0x357964u;
    // 0x357964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x357964u;
    {
        const bool branch_taken_0x357964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357964) {
            ctx->pc = 0x357974u;
            goto label_357974;
        }
    }
    ctx->pc = 0x35796Cu;
label_35796c:
    // 0x35796c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x357970: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x357970u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_357974:
    // 0x357974: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x357974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x357978: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x357978u;
    SET_GPR_U32(ctx, 31, 0x357980u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x357978u, 0x357980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357980u;
label_357980:
    // 0x357980: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x357980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x357984: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x357984u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357988: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x357988u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35798c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35798cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357990: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x357990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x357994: 0x3e00008  jr          $ra
    ctx->pc = 0x357994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35799Cu;
}
