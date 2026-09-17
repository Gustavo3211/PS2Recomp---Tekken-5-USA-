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

// Function: sub_00351188
// Address: 0x351188 - 0x351988
void sub_00351188_0x351188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351188_0x351188");
#endif

    switch (ctx->pc) {
        case 0x3511acu: goto label_3511ac;
        case 0x351218u: goto label_351218;
        case 0x35125cu: goto label_35125c;
        case 0x3512e0u: goto label_3512e0;
        case 0x351324u: goto label_351324;
        case 0x3513a8u: goto label_3513a8;
        case 0x3513ecu: goto label_3513ec;
        case 0x351470u: goto label_351470;
        case 0x3514acu: goto label_3514ac;
        case 0x351518u: goto label_351518;
        case 0x351558u: goto label_351558;
        case 0x3515d0u: goto label_3515d0;
        case 0x35160cu: goto label_35160c;
        case 0x351678u: goto label_351678;
        case 0x3516b4u: goto label_3516b4;
        case 0x351720u: goto label_351720;
        case 0x351760u: goto label_351760;
        case 0x3517d8u: goto label_3517d8;
        case 0x351834u: goto label_351834;
        case 0x3518acu: goto label_3518ac;
        case 0x351904u: goto label_351904;
        case 0x351970u: goto label_351970;
        default: break;
    }

    ctx->pc = 0x351188u;

    // 0x351188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35118c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x35118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351190: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351194: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351194u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351198: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351198u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35119c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35119cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3511a0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3511a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3511a4: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x3511A4u;
    SET_GPR_U32(ctx, 31, 0x3511ACu);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x3511A4u, 0x3511ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511ACu;
label_3511ac:
    // 0x3511ac: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3511acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3511b0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3511b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3511b4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3511b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3511b8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3511b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3511bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3511BCu;
    {
        const bool branch_taken_0x3511bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3511bc) {
            ctx->pc = 0x3511D4u;
            goto label_3511d4;
        }
    }
    ctx->pc = 0x3511C4u;
    // 0x3511c4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3511c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3511c8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3511c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3511cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3511CCu;
    {
        const bool branch_taken_0x3511cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3511cc) {
            ctx->pc = 0x351218u;
            goto label_351218;
        }
    }
    ctx->pc = 0x3511D4u;
label_3511d4:
    // 0x3511d4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3511d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3511d8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x3511d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x3511dc: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x3511dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x3511e0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3511e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3511e4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3511e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3511e8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3511e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3511ec: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3511ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3511f0: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3511f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3511f4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3511f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3511f8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x3511f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x3511fc: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3511fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351200: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351204: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351208: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x351208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35120c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351210: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351210u;
    SET_GPR_U32(ctx, 31, 0x351218u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351210u, 0x351218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351218u;
label_351218:
    // 0x351218: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351218u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35121c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x35121cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351220: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351224: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351228: 0x3e00008  jr          $ra
    ctx->pc = 0x351228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351230u;
    // 0x351230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351234: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351238: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35123c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35123cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351240: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351240u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351244: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351244u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351248: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351248u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x35124c: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x35124cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351250: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x351250u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x351254: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351254u;
    SET_GPR_U32(ctx, 31, 0x35125Cu);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351254u, 0x35125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35125Cu;
label_35125c:
    // 0x35125c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x35125cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351260: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351264: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x351264u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x351268: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x351268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35126c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35126Cu;
    {
        const bool branch_taken_0x35126c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35126c) {
            ctx->pc = 0x351284u;
            goto label_351284;
        }
    }
    ctx->pc = 0x351274u;
    // 0x351274: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351278: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x35127c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x35127Cu;
    {
        const bool branch_taken_0x35127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35127c) {
            ctx->pc = 0x3512E0u;
            goto label_3512e0;
        }
    }
    ctx->pc = 0x351284u;
label_351284:
    // 0x351284: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351288: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x35128c: 0x24422614  addiu       $v0, $v0, 0x2614
    ctx->pc = 0x35128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9748));
    // 0x351290: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351294: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351298: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35129c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x35129cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3512a0: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3512a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3512a4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3512a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3512a8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x3512a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x3512ac: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3512acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3512b0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3512b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3512b4: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x3512b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x3512b8: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3512b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3512bc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3512bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3512c0: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x3512c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x3512c4: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3512c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3512c8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3512c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3512cc: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x3512ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x3512d0: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x3512d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3512d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3512d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3512d8: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x3512D8u;
    SET_GPR_U32(ctx, 31, 0x3512E0u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x3512D8u, 0x3512E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512E0u;
label_3512e0:
    // 0x3512e0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3512e0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3512e4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3512e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3512e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3512e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3512ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3512ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3512f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3512F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3512F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3512F8u;
    // 0x3512f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3512f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3512fc: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x3512fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351300: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351304: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351304u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351308: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351308u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35130c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35130cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351310: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351310u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351314: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x351314u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351318: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x351318u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x35131c: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x35131Cu;
    SET_GPR_U32(ctx, 31, 0x351324u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x35131Cu, 0x351324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351324u;
label_351324:
    // 0x351324: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351324u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351328: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35132c: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x35132cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x351330: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x351330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351334: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351334u;
    {
        const bool branch_taken_0x351334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351334) {
            ctx->pc = 0x35134Cu;
            goto label_35134c;
        }
    }
    ctx->pc = 0x35133Cu;
    // 0x35133c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351340: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351344: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x351344u;
    {
        const bool branch_taken_0x351344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351344) {
            ctx->pc = 0x3513A8u;
            goto label_3513a8;
        }
    }
    ctx->pc = 0x35134Cu;
label_35134c:
    // 0x35134c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x35134cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351350: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351354: 0x244226d0  addiu       $v0, $v0, 0x26D0
    ctx->pc = 0x351354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
    // 0x351358: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x35135c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x35135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351360: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351364: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351368: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35136c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351370: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351374: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351378: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35137c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x35137cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351380: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351384: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351388: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x35138c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x35138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351390: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351394: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x351394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x351398: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x351398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35139c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3513a0: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x3513A0u;
    SET_GPR_U32(ctx, 31, 0x3513A8u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x3513A0u, 0x3513A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3513A8u;
label_3513a8:
    // 0x3513a8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3513a8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3513ac: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3513acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3513b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3513b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3513b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3513b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3513b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3513B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3513B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3513C0u;
    // 0x3513c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3513c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3513c4: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x3513c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x3513c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3513c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3513cc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3513ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3513d0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3513d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3513d4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3513d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3513d8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3513d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3513dc: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x3513dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x3513e0: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x3513e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x3513e4: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x3513E4u;
    SET_GPR_U32(ctx, 31, 0x3513ECu);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x3513E4u, 0x3513ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3513ECu;
label_3513ec:
    // 0x3513ec: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x3513ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x3513f0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3513f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3513f4: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x3513f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x3513f8: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3513f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3513fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3513FCu;
    {
        const bool branch_taken_0x3513fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3513fc) {
            ctx->pc = 0x351414u;
            goto label_351414;
        }
    }
    ctx->pc = 0x351404u;
    // 0x351404: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351408: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x35140c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x35140Cu;
    {
        const bool branch_taken_0x35140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35140c) {
            ctx->pc = 0x351470u;
            goto label_351470;
        }
    }
    ctx->pc = 0x351414u;
label_351414:
    // 0x351414: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351418: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x35141c: 0x2442278c  addiu       $v0, $v0, 0x278C
    ctx->pc = 0x35141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10124));
    // 0x351420: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351424: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351428: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35142c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x35142cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351430: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351434: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351438: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x35143c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x35143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351440: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351444: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351448: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35144c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351450: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x351454: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351458: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x35145c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x35145cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x351460: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x351460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351464: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351468: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351468u;
    SET_GPR_U32(ctx, 31, 0x351470u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351468u, 0x351470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351470u;
label_351470:
    // 0x351470: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351470u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351474: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351474u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351478: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35147c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35147cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351480: 0x3e00008  jr          $ra
    ctx->pc = 0x351480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351488u;
    // 0x351488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35148c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x35148cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351490: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351494: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351494u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351498: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351498u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35149c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35149cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3514a0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3514a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3514a4: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x3514A4u;
    SET_GPR_U32(ctx, 31, 0x3514ACu);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x3514A4u, 0x3514ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3514ACu;
label_3514ac:
    // 0x3514ac: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3514acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3514b0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3514b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3514b4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3514b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3514b8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3514b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3514bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3514BCu;
    {
        const bool branch_taken_0x3514bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3514bc) {
            ctx->pc = 0x3514D4u;
            goto label_3514d4;
        }
    }
    ctx->pc = 0x3514C4u;
    // 0x3514c4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3514c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3514c8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3514c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3514cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3514CCu;
    {
        const bool branch_taken_0x3514cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3514cc) {
            ctx->pc = 0x351518u;
            goto label_351518;
        }
    }
    ctx->pc = 0x3514D4u;
label_3514d4:
    // 0x3514d4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3514d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3514d8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x3514d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x3514dc: 0x24422848  addiu       $v0, $v0, 0x2848
    ctx->pc = 0x3514dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10312));
    // 0x3514e0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3514e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3514e4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3514e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3514e8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3514e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3514ec: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3514ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3514f0: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3514f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3514f4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3514f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3514f8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x3514f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x3514fc: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3514fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351500: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351504: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351508: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x351508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35150c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351510: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351510u;
    SET_GPR_U32(ctx, 31, 0x351518u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351510u, 0x351518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351518u;
label_351518:
    // 0x351518: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351518u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35151c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x35151cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351520: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351524: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351528: 0x3e00008  jr          $ra
    ctx->pc = 0x351528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351530u;
    // 0x351530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351534: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351538: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35153c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35153cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351540: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351540u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351544: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351544u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351548: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351548u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x35154c: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x35154cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351550: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351550u;
    SET_GPR_U32(ctx, 31, 0x351558u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351550u, 0x351558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351558u;
label_351558:
    // 0x351558: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351558u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x35155c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x35155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351560: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351560u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351564: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351568: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351568u;
    {
        const bool branch_taken_0x351568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351568) {
            ctx->pc = 0x351580u;
            goto label_351580;
        }
    }
    ctx->pc = 0x351570u;
    // 0x351570: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351574: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351578: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x351578u;
    {
        const bool branch_taken_0x351578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351578) {
            ctx->pc = 0x3515D0u;
            goto label_3515d0;
        }
    }
    ctx->pc = 0x351580u;
label_351580:
    // 0x351580: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351584: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351588: 0x244228f4  addiu       $v0, $v0, 0x28F4
    ctx->pc = 0x351588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10484));
    // 0x35158c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x35158cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351590: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351594: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351598: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x35159c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x35159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3515a0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3515a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3515a4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x3515a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x3515a8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x3515a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3515ac: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3515acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3515b0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x3515b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x3515b4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x3515b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3515b8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3515b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3515bc: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x3515bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x3515c0: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x3515c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3515c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3515c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3515c8: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x3515C8u;
    SET_GPR_U32(ctx, 31, 0x3515D0u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x3515C8u, 0x3515D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515D0u;
label_3515d0:
    // 0x3515d0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3515d0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3515d4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3515d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3515d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3515d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3515dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3515dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3515e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3515E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3515E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3515E8u;
    // 0x3515e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3515e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3515ec: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x3515ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x3515f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3515f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3515f4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3515f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3515f8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3515f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3515fc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3515fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351600: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351600u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351604: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351604u;
    SET_GPR_U32(ctx, 31, 0x35160Cu);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351604u, 0x35160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35160Cu;
label_35160c:
    // 0x35160c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35160cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x351610: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351614: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351614u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351618: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x35161c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35161Cu;
    {
        const bool branch_taken_0x35161c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35161c) {
            ctx->pc = 0x351634u;
            goto label_351634;
        }
    }
    ctx->pc = 0x351624u;
    // 0x351624: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351628: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x35162c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x35162Cu;
    {
        const bool branch_taken_0x35162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35162c) {
            ctx->pc = 0x351678u;
            goto label_351678;
        }
    }
    ctx->pc = 0x351634u;
label_351634:
    // 0x351634: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351638: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x35163c: 0x244229a8  addiu       $v0, $v0, 0x29A8
    ctx->pc = 0x35163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10664));
    // 0x351640: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351644: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351648: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35164c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x35164cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351650: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351654: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351658: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x35165c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x35165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351660: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351664: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351668: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x351668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35166c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35166cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351670: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351670u;
    SET_GPR_U32(ctx, 31, 0x351678u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351670u, 0x351678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351678u;
label_351678:
    // 0x351678: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351678u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35167c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x35167cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351680: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351684: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351688: 0x3e00008  jr          $ra
    ctx->pc = 0x351688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351690u;
    // 0x351690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351694: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351698: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35169c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35169cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3516a0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3516a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3516a4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3516a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3516a8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3516a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3516ac: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x3516ACu;
    SET_GPR_U32(ctx, 31, 0x3516B4u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x3516ACu, 0x3516B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3516B4u;
label_3516b4:
    // 0x3516b4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3516b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3516b8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3516b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3516bc: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3516bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3516c0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3516c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3516c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3516C4u;
    {
        const bool branch_taken_0x3516c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3516c4) {
            ctx->pc = 0x3516DCu;
            goto label_3516dc;
        }
    }
    ctx->pc = 0x3516CCu;
    // 0x3516cc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3516ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3516d0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3516d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3516d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3516D4u;
    {
        const bool branch_taken_0x3516d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3516d4) {
            ctx->pc = 0x351720u;
            goto label_351720;
        }
    }
    ctx->pc = 0x3516DCu;
label_3516dc:
    // 0x3516dc: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3516e0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x3516e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x3516e4: 0x24422a54  addiu       $v0, $v0, 0x2A54
    ctx->pc = 0x3516e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10836));
    // 0x3516e8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3516e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3516ec: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3516ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3516f0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3516f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3516f4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3516f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3516f8: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3516f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3516fc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3516fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351700: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351704: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351708: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35170c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x35170cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351710: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x351710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351714: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351718: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351718u;
    SET_GPR_U32(ctx, 31, 0x351720u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351718u, 0x351720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351720u;
label_351720:
    // 0x351720: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351720u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351724: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351724u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351728: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35172c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35172cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351730: 0x3e00008  jr          $ra
    ctx->pc = 0x351730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351738u;
    // 0x351738: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35173c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x35173cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351740: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351744: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351744u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351748: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351748u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35174c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35174cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351750: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351750u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351754: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x351754u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351758: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351758u;
    SET_GPR_U32(ctx, 31, 0x351760u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351758u, 0x351760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351760u;
label_351760:
    // 0x351760: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351760u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351764: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351768: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351768u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x35176c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x35176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351770: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351770u;
    {
        const bool branch_taken_0x351770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351770) {
            ctx->pc = 0x351788u;
            goto label_351788;
        }
    }
    ctx->pc = 0x351778u;
    // 0x351778: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x35177c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x35177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351780: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x351780u;
    {
        const bool branch_taken_0x351780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351780) {
            ctx->pc = 0x3517D8u;
            goto label_3517d8;
        }
    }
    ctx->pc = 0x351788u;
label_351788:
    // 0x351788: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35178c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x35178cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351790: 0x24422b00  addiu       $v0, $v0, 0x2B00
    ctx->pc = 0x351790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11008));
    // 0x351794: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351798: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35179c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3517a0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3517a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3517a4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x3517a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3517a8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3517a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3517ac: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x3517acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x3517b0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x3517b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3517b4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3517b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3517b8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x3517b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x3517bc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x3517bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3517c0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3517c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3517c4: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x3517c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x3517c8: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x3517c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3517cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3517ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3517d0: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x3517D0u;
    SET_GPR_U32(ctx, 31, 0x3517D8u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x3517D0u, 0x3517D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3517D8u;
label_3517d8:
    // 0x3517d8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3517d8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3517dc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3517dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3517e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3517e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3517e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3517e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3517e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3517E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3517E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3517F0u;
    // 0x3517f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3517f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3517f4: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x3517f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x3517f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3517f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3517fc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3517fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351800: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351800u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351804: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351804u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351808: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351808u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x35180c: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x35180cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351810: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351814: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351814u;
    {
        const bool branch_taken_0x351814 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x351814) {
            ctx->pc = 0x35182Cu;
            goto label_35182c;
        }
    }
    ctx->pc = 0x35181Cu;
    // 0x35181c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35181cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351820: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x351820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x351824: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x351824u;
    {
        const bool branch_taken_0x351824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351824) {
            ctx->pc = 0x3518ACu;
            goto label_3518ac;
        }
    }
    ctx->pc = 0x35182Cu;
label_35182c:
    // 0x35182c: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x35182Cu;
    SET_GPR_U32(ctx, 31, 0x351834u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x35182Cu, 0x351834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351834u;
label_351834:
    // 0x351834: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351834u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351838: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x35183c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x35183cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351840: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351844: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351844u;
    {
        const bool branch_taken_0x351844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351844) {
            ctx->pc = 0x35185Cu;
            goto label_35185c;
        }
    }
    ctx->pc = 0x35184Cu;
    // 0x35184c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351850: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351854: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x351854u;
    {
        const bool branch_taken_0x351854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351854) {
            ctx->pc = 0x3518ACu;
            goto label_3518ac;
        }
    }
    ctx->pc = 0x35185Cu;
label_35185c:
    // 0x35185c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x35185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351860: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351864: 0x24422bb4  addiu       $v0, $v0, 0x2BB4
    ctx->pc = 0x351864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11188));
    // 0x351868: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x35186c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x35186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351870: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351874: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351878: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35187c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351880: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351884: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351888: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35188c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x35188cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351890: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351894: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351898: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x35189c: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x35189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3518a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3518a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3518a4: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x3518A4u;
    SET_GPR_U32(ctx, 31, 0x3518ACu);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x3518A4u, 0x3518ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3518ACu;
label_3518ac:
    // 0x3518ac: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3518acu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3518b0: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3518b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3518b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3518b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3518b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3518b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3518bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3518BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3518BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3518C4u;
    // 0x3518c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3518c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3518c8: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x3518c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x3518cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3518ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3518d0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3518d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3518d4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3518d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3518d8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3518d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3518dc: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3518dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3518e0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3518e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3518e4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3518E4u;
    {
        const bool branch_taken_0x3518e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3518e4) {
            ctx->pc = 0x3518FCu;
            goto label_3518fc;
        }
    }
    ctx->pc = 0x3518ECu;
    // 0x3518ec: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3518ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3518f0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x3518f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x3518f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3518F4u;
    {
        const bool branch_taken_0x3518f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3518f4) {
            ctx->pc = 0x351970u;
            goto label_351970;
        }
    }
    ctx->pc = 0x3518FCu;
label_3518fc:
    // 0x3518fc: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x3518FCu;
    SET_GPR_U32(ctx, 31, 0x351904u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x3518FCu, 0x351904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351904u;
label_351904:
    // 0x351904: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x351904u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x351908: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35190c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x35190cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351910: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351914: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351914u;
    {
        const bool branch_taken_0x351914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351914) {
            ctx->pc = 0x35192Cu;
            goto label_35192c;
        }
    }
    ctx->pc = 0x35191Cu;
    // 0x35191c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35191cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351920: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351924: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x351924u;
    {
        const bool branch_taken_0x351924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351924) {
            ctx->pc = 0x351970u;
            goto label_351970;
        }
    }
    ctx->pc = 0x35192Cu;
label_35192c:
    // 0x35192c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x35192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351930: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351934: 0x24422c68  addiu       $v0, $v0, 0x2C68
    ctx->pc = 0x351934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11368));
    // 0x351938: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x35193c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x35193cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351940: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351944: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351948: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x35194c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351950: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351954: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351958: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35195c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x35195cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351960: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x351960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351964: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351968: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351968u;
    SET_GPR_U32(ctx, 31, 0x351970u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351968u, 0x351970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351970u;
label_351970:
    // 0x351970: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351970u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351974: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351974u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351978: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35197c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35197cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351980: 0x3e00008  jr          $ra
    ctx->pc = 0x351980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351988u;
}
