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

// Function: sub_003591F8
// Address: 0x3591f8 - 0x359c78
void sub_003591F8_0x3591f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003591F8_0x3591f8");
#endif

    switch (ctx->pc) {
        case 0x359460u: goto label_359460;
        case 0x359490u: goto label_359490;
        case 0x3594c0u: goto label_3594c0;
        case 0x3594d8u: goto label_3594d8;
        case 0x359558u: goto label_359558;
        case 0x359594u: goto label_359594;
        case 0x359608u: goto label_359608;
        case 0x35964cu: goto label_35964c;
        case 0x3596c0u: goto label_3596c0;
        case 0x3596fcu: goto label_3596fc;
        case 0x359770u: goto label_359770;
        case 0x3597b0u: goto label_3597b0;
        case 0x359828u: goto label_359828;
        case 0x359850u: goto label_359850;
        case 0x359880u: goto label_359880;
        case 0x359898u: goto label_359898;
        case 0x3598f8u: goto label_3598f8;
        case 0x359940u: goto label_359940;
        case 0x35995cu: goto label_35995c;
        case 0x35998cu: goto label_35998c;
        case 0x3599d8u: goto label_3599d8;
        case 0x359a00u: goto label_359a00;
        case 0x359a34u: goto label_359a34;
        case 0x359a58u: goto label_359a58;
        case 0x359aa8u: goto label_359aa8;
        case 0x359ac8u: goto label_359ac8;
        case 0x359bc8u: goto label_359bc8;
        case 0x359be4u: goto label_359be4;
        case 0x359c30u: goto label_359c30;
        case 0x359c48u: goto label_359c48;
        default: break;
    }

    ctx->pc = 0x3591f8u;

    // 0x3591f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3591f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3591fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3591fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359204: 0x80d8e14  j           func_363850
    ctx->pc = 0x359204u;
    ctx->pc = 0x359208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359204u;
    // 0x359208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363850u, 0x359204u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35920Cu;
    // 0x35920c: 0x0  nop
    ctx->pc = 0x35920cu;
    // NOP
    // 0x359210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359214: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35921c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35921cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359220: 0x80d7936  j           func_35E4D8
    ctx->pc = 0x359220u;
    ctx->pc = 0x359224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359220u;
    // 0x359224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E4D8u, 0x359220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359228u;
    // 0x359228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35922c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35922cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359238: 0x80d79ec  j           func_35E7B0
    ctx->pc = 0x359238u;
    ctx->pc = 0x35923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359238u;
    // 0x35923c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E7B0u;
    sub_0035E7B0_0x35e7b0(rdram, ctx, runtime); return;
    ctx->pc = 0x359240u;
    // 0x359240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359244: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x359244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x359248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35924c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35924cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359250: 0x80d86d6  j           func_361B58
    ctx->pc = 0x359250u;
    ctx->pc = 0x359254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359250u;
    // 0x359254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361B58u, 0x359250u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359258u;
    // 0x359258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35925c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x35925cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x359260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359268: 0x80d8704  j           func_361C10
    ctx->pc = 0x359268u;
    ctx->pc = 0x35926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359268u;
    // 0x35926c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361C10u, 0x359268u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359270u;
    // 0x359270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359274: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x359274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x359278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35927c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359280: 0x80d8732  j           func_361CC8
    ctx->pc = 0x359280u;
    ctx->pc = 0x359284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359280u;
    // 0x359284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361CC8u, 0x359280u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359288u;
    // 0x359288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35928c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x35928cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x359290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359298: 0x80d8760  j           func_361D80
    ctx->pc = 0x359298u;
    ctx->pc = 0x35929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359298u;
    // 0x35929c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361D80u, 0x359298u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3592A0u;
    // 0x3592a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3592a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3592a4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3592a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3592a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3592a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3592ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3592acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3592b0: 0x80d878e  j           func_361E38
    ctx->pc = 0x3592B0u;
    ctx->pc = 0x3592B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592B0u;
    // 0x3592b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361E38u, 0x3592B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3592B8u;
    // 0x3592b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3592b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3592bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3592bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3592c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3592c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3592c4: 0x80d8938  j           func_3624E0
    ctx->pc = 0x3592C4u;
    ctx->pc = 0x3592C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592C4u;
    // 0x3592c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3624E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3624E0u, 0x3592C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3592CCu;
    // 0x3592cc: 0x0  nop
    ctx->pc = 0x3592ccu;
    // NOP
    // 0x3592d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3592d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3592d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3592d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3592d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3592d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3592dc: 0x80d8968  j           func_3625A0
    ctx->pc = 0x3592DCu;
    ctx->pc = 0x3592E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592DCu;
    // 0x3592e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3625A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3625A0u, 0x3592DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3592E4u;
    // 0x3592e4: 0x0  nop
    ctx->pc = 0x3592e4u;
    // NOP
    // 0x3592e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3592e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3592ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3592ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3592f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3592f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3592f4: 0x80d8972  j           func_3625C8
    ctx->pc = 0x3592F4u;
    ctx->pc = 0x3592F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592F4u;
    // 0x3592f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3625C8u;
    sub_003625C8_0x3625c8(rdram, ctx, runtime); return;
    ctx->pc = 0x3592FCu;
    // 0x3592fc: 0x0  nop
    ctx->pc = 0x3592fcu;
    // NOP
    // 0x359300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35930c: 0x80d897c  j           func_3625F0
    ctx->pc = 0x35930Cu;
    ctx->pc = 0x359310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35930Cu;
    // 0x359310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3625F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3625F0u, 0x35930Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359314u;
    // 0x359314: 0x0  nop
    ctx->pc = 0x359314u;
    // NOP
    // 0x359318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35931c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35931cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359324: 0x80d8982  j           func_362608
    ctx->pc = 0x359324u;
    ctx->pc = 0x359328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359324u;
    // 0x359328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362608u, 0x359324u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35932Cu;
    // 0x35932c: 0x0  nop
    ctx->pc = 0x35932cu;
    // NOP
    // 0x359330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35933c: 0x80d8994  j           func_362650
    ctx->pc = 0x35933Cu;
    ctx->pc = 0x359340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35933Cu;
    // 0x359340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362650u, 0x35933Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359344u;
    // 0x359344: 0x0  nop
    ctx->pc = 0x359344u;
    // NOP
    // 0x359348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35934c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359354: 0x80d8996  j           func_362658
    ctx->pc = 0x359354u;
    ctx->pc = 0x359358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359354u;
    // 0x359358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362658u, 0x359354u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35935Cu;
    // 0x35935c: 0x0  nop
    ctx->pc = 0x35935cu;
    // NOP
    // 0x359360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35936c: 0x80d7826  j           func_35E098
    ctx->pc = 0x35936Cu;
    ctx->pc = 0x359370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35936Cu;
    // 0x359370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E098u;
    sub_0035E098_0x35e098(rdram, ctx, runtime); return;
    ctx->pc = 0x359374u;
    // 0x359374: 0x0  nop
    ctx->pc = 0x359374u;
    // NOP
    // 0x359378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35937c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359384: 0x80d7820  j           func_35E080
    ctx->pc = 0x359384u;
    ctx->pc = 0x359388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359384u;
    // 0x359388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E080u;
    sub_0035E080_0x35e080(rdram, ctx, runtime); return;
    ctx->pc = 0x35938Cu;
    // 0x35938c: 0x0  nop
    ctx->pc = 0x35938cu;
    // NOP
    // 0x359390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35939c: 0x80d7704  j           func_35DC10
    ctx->pc = 0x35939Cu;
    ctx->pc = 0x3593A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35939Cu;
    // 0x3593a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DC10u;
    sub_0035DC10_0x35dc10(rdram, ctx, runtime); return;
    ctx->pc = 0x3593A4u;
    // 0x3593a4: 0x0  nop
    ctx->pc = 0x3593a4u;
    // NOP
    // 0x3593a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3593a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3593ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3593acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3593b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3593b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3593b4: 0x80d7736  j           func_35DCD8
    ctx->pc = 0x3593B4u;
    ctx->pc = 0x3593B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593B4u;
    // 0x3593b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DCD8u, 0x3593B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3593BCu;
    // 0x3593bc: 0x0  nop
    ctx->pc = 0x3593bcu;
    // NOP
    // 0x3593c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3593c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3593c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3593c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3593c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3593c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3593cc: 0x80d7758  j           func_35DD60
    ctx->pc = 0x3593CCu;
    ctx->pc = 0x3593D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593CCu;
    // 0x3593d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DD60u;
    sub_0035DD60_0x35dd60(rdram, ctx, runtime); return;
    ctx->pc = 0x3593D4u;
    // 0x3593d4: 0x0  nop
    ctx->pc = 0x3593d4u;
    // NOP
    // 0x3593d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3593d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3593dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3593dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3593e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3593e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3593e4: 0x80d8828  j           func_3620A0
    ctx->pc = 0x3593E4u;
    ctx->pc = 0x3593E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593E4u;
    // 0x3593e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3620A0u, 0x3593E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3593ECu;
    // 0x3593ec: 0x0  nop
    ctx->pc = 0x3593ecu;
    // NOP
    // 0x3593f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3593f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3593f4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3593f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3593f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3593f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3593fc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3593fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359404: 0x80d7f90  j           func_35FE40
    ctx->pc = 0x359404u;
    ctx->pc = 0x359408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359404u;
    // 0x359408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FE40u, 0x359404u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35940Cu;
    // 0x35940c: 0x0  nop
    ctx->pc = 0x35940cu;
    // NOP
    // 0x359410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35941c: 0x80d7f6a  j           func_35FDA8
    ctx->pc = 0x35941Cu;
    ctx->pc = 0x359420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35941Cu;
    // 0x359420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FDA8u, 0x35941Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359424u;
    // 0x359424: 0x0  nop
    ctx->pc = 0x359424u;
    // NOP
    // 0x359428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35942c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359434: 0x80d7c1c  j           func_35F070
    ctx->pc = 0x359434u;
    ctx->pc = 0x359438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359434u;
    // 0x359438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F070u;
    sub_0035F070_0x35f070(rdram, ctx, runtime); return;
    ctx->pc = 0x35943Cu;
    // 0x35943c: 0x0  nop
    ctx->pc = 0x35943cu;
    // NOP
    // 0x359440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359444: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35944c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35944cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359454: 0x80d7444  j           func_35D110
    ctx->pc = 0x359454u;
    ctx->pc = 0x359458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359454u;
    // 0x359458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D110u, 0x359454u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35945Cu;
    // 0x35945c: 0x0  nop
    ctx->pc = 0x35945cu;
    // NOP
label_359460:
    // 0x359460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359468: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x359468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35946c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x359470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359474: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x359474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x359478: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x359478u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x35947c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35947Cu;
    {
        const bool branch_taken_0x35947c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x359480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35947Cu;
        // 0x359480: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35947c) {
            ctx->pc = 0x3594A0u;
            goto label_3594a0;
        }
    }
    ctx->pc = 0x359484u;
    // 0x359484: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359488: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x359488u;
    SET_GPR_U32(ctx, 31, 0x359490u);
    ctx->pc = 0x35948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359488u;
    // 0x35948c: 0x24845010  addiu       $a0, $a0, 0x5010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x359488u, 0x359490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359490u;
label_359490:
    // 0x359490: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x359490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x359494: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x359494u;
    {
        const bool branch_taken_0x359494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359494u;
        // 0x359498: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359494) {
            ctx->pc = 0x35953Cu;
            goto label_35953c;
        }
    }
    ctx->pc = 0x35949Cu;
    // 0x35949c: 0x0  nop
    ctx->pc = 0x35949cu;
    // NOP
label_3594a0:
    // 0x3594a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3594a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3594a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3594a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594a8: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x3594a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3594ac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3594ACu;
    {
        const bool branch_taken_0x3594ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3594ac) {
            ctx->pc = 0x3594D0u;
            goto label_3594d0;
        }
    }
    ctx->pc = 0x3594B4u;
    // 0x3594b4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3594b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3594b8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3594B8u;
    SET_GPR_U32(ctx, 31, 0x3594C0u);
    ctx->pc = 0x3594BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3594B8u;
    // 0x3594bc: 0x24845040  addiu       $a0, $a0, 0x5040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3594B8u, 0x3594C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3594C0u;
label_3594c0:
    // 0x3594c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3594c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3594c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3594C4u;
    {
        const bool branch_taken_0x3594c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3594C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594C4u;
        // 0x3594c8: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3594c4) {
            ctx->pc = 0x35953Cu;
            goto label_35953c;
        }
    }
    ctx->pc = 0x3594CCu;
    // 0x3594cc: 0x0  nop
    ctx->pc = 0x3594ccu;
    // NOP
label_3594d0:
    // 0x3594d0: 0xc0d63aa  jal         func_358EA8
    ctx->pc = 0x3594D0u;
    SET_GPR_U32(ctx, 31, 0x3594D8u);
    ctx->pc = 0x3594D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3594D0u;
    // 0x3594d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358EA8u, 0x3594D0u, 0x3594D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3594D8u;
label_3594d8:
    // 0x3594d8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x3594d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x3594dc: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3594dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3594e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3594e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3594e4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3594e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3594e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3594e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3594ec: 0x24a50098  addiu       $a1, $a1, 0x98
    ctx->pc = 0x3594ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
    // 0x3594f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3594f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3594f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3594f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3594f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3594fc: 0x0  nop
    ctx->pc = 0x3594fcu;
    // NOP
    // 0x359500: 0x0  nop
    ctx->pc = 0x359500u;
    // NOP
    // 0x359504: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x359504u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x359508: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x359508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x35950c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359510: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x359510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359514: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x359514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x359518: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x359518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x35951c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x35951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359520: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x359520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x359524: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x359524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x359528: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x359528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x35952c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359530: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x359530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359534: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x359534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x359538: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x359538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_35953c:
    // 0x35953c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35953cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359548: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x359548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35954c: 0x3e00008  jr          $ra
    ctx->pc = 0x35954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35954Cu;
        // 0x359550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359554u;
    // 0x359554: 0x0  nop
    ctx->pc = 0x359554u;
    // NOP
label_359558:
    // 0x359558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35955c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35955cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359564: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x359564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359568: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x359568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x35956c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35956cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x359570: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x359570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x359574: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x359574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35957c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35957cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x359580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359584: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x359584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35958c: 0xc0d633c  jal         func_358CF0
    ctx->pc = 0x35958Cu;
    SET_GPR_U32(ctx, 31, 0x359594u);
    ctx->pc = 0x359590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35958Cu;
    // 0x359590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358CF0u, 0x35958Cu, 0x359594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359594u;
label_359594:
    // 0x359594: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x359594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x359598: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x359598u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35959c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35959cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3595a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3595a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3595a4: 0x24a50098  addiu       $a1, $a1, 0x98
    ctx->pc = 0x3595a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
    // 0x3595a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3595a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3595ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3595acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3595b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3595b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3595b4: 0x0  nop
    ctx->pc = 0x3595b4u;
    // NOP
    // 0x3595b8: 0x0  nop
    ctx->pc = 0x3595b8u;
    // NOP
    // 0x3595bc: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x3595bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x3595c0: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x3595c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3595c4: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x3595c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3595c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3595c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3595cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3595ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3595d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3595d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3595d4: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x3595d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x3595d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3595d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3595dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3595dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3595e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3595e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3595e4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3595e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3595e8: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x3595e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x3595ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3595ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3595f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3595f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3595f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3595f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3595f8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3595f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3595fc: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3595fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x359600: 0x3e00008  jr          $ra
    ctx->pc = 0x359600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359600u;
        // 0x359604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359608u;
label_359608:
    // 0x359608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35960c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x35960cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x359610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359614: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x359614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359618: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x359618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x35961c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35961cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x359620: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x359620u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x359624: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x359624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x359628: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35962c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x35962cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359630: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x359630u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x359634: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x359634u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x359638: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x359638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35963c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35963cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x359644: 0xc0d633c  jal         func_358CF0
    ctx->pc = 0x359644u;
    SET_GPR_U32(ctx, 31, 0x35964Cu);
    ctx->pc = 0x359648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359644u;
    // 0x359648: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x358CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358CF0u, 0x359644u, 0x35964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35964Cu;
label_35964c:
    // 0x35964c: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x35964cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x359650: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x359650u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x359654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x359658: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x359658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35965c: 0x24a50098  addiu       $a1, $a1, 0x98
    ctx->pc = 0x35965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
    // 0x359660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359664: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x359664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x359668: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x359668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35966c: 0x0  nop
    ctx->pc = 0x35966cu;
    // NOP
    // 0x359670: 0x0  nop
    ctx->pc = 0x359670u;
    // NOP
    // 0x359674: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x359674u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x359678: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x359678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x35967c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x35967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x359680: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x359680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359684: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x359684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359688: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x359688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35968c: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x35968cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x359690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359694: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x359694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359698: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x359698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35969c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x35969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3596a0: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x3596a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x3596a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3596a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3596a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3596a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3596ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3596acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3596b0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3596b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3596b4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3596b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3596b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3596B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3596BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596B8u;
        // 0x3596bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3596B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3596C0u;
label_3596c0:
    // 0x3596c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3596c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3596c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3596c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3596c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3596c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3596cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3596ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596d0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x3596d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3596d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3596d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3596d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3596d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3596dc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3596dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3596e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3596e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3596e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3596e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596ec: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3596ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3596f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3596f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3596f4: 0xc0d6350  jal         func_358D40
    ctx->pc = 0x3596F4u;
    SET_GPR_U32(ctx, 31, 0x3596FCu);
    ctx->pc = 0x3596F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3596F4u;
    // 0x3596f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358D40u, 0x3596F4u, 0x3596FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596FCu;
label_3596fc:
    // 0x3596fc: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x3596fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x359700: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x359700u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x359704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x359708: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x359708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35970c: 0x24a50098  addiu       $a1, $a1, 0x98
    ctx->pc = 0x35970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
    // 0x359710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359714: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x359714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x359718: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x359718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35971c: 0x0  nop
    ctx->pc = 0x35971cu;
    // NOP
    // 0x359720: 0x0  nop
    ctx->pc = 0x359720u;
    // NOP
    // 0x359724: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x359724u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x359728: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x359728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x35972c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x35972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x359730: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x359730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359734: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x359734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359738: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x359738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35973c: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x35973cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x359740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359744: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x359744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359748: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x359748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35974c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x35974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x359750: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x359750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x359754: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x359754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35975c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35975cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359760: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x359760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x359764: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x359764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x359768: 0x3e00008  jr          $ra
    ctx->pc = 0x359768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359768u;
        // 0x35976c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359770u;
label_359770:
    // 0x359770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359774: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x359774u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x359778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35977c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x35977cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359780: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x359780u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x359784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359788: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x359788u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x35978c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x35978cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x359790: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x359790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359794: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x359794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359798: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35979c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35979cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3597a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3597a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3597a4: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x3597a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3597a8: 0xc0d6350  jal         func_358D40
    ctx->pc = 0x3597A8u;
    SET_GPR_U32(ctx, 31, 0x3597B0u);
    ctx->pc = 0x3597ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3597A8u;
    // 0x3597ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x358D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358D40u, 0x3597A8u, 0x3597B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3597B0u;
label_3597b0:
    // 0x3597b0: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x3597b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x3597b4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3597b4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3597b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3597b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3597bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3597bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3597c0: 0x24a50098  addiu       $a1, $a1, 0x98
    ctx->pc = 0x3597c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
    // 0x3597c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3597c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3597c8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3597c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3597cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3597ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3597d0: 0x0  nop
    ctx->pc = 0x3597d0u;
    // NOP
    // 0x3597d4: 0x0  nop
    ctx->pc = 0x3597d4u;
    // NOP
    // 0x3597d8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x3597d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x3597dc: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x3597dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3597e0: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x3597e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3597e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3597e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3597e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3597e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3597ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3597ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3597f0: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x3597f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x3597f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3597f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3597f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3597f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3597fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3597fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x359800: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x359800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x359804: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x359804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x359808: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x359808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35980c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35980cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359810: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x359810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359814: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x359814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x359818: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x359818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x35981c: 0x3e00008  jr          $ra
    ctx->pc = 0x35981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35981Cu;
        // 0x359820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359824u;
    // 0x359824: 0x0  nop
    ctx->pc = 0x359824u;
    // NOP
label_359828:
    // 0x359828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35982c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359830: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x359830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359834: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x359838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35983c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35983Cu;
    {
        const bool branch_taken_0x35983c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x359840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35983Cu;
        // 0x359840: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35983c) {
            ctx->pc = 0x359860u;
            goto label_359860;
        }
    }
    ctx->pc = 0x359844u;
    // 0x359844: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359848: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x359848u;
    SET_GPR_U32(ctx, 31, 0x359850u);
    ctx->pc = 0x35984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359848u;
    // 0x35984c: 0x24845070  addiu       $a0, $a0, 0x5070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x359848u, 0x359850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359850u;
label_359850:
    // 0x359850: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x359850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x359854: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x359854u;
    {
        const bool branch_taken_0x359854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359854u;
        // 0x359858: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359854) {
            ctx->pc = 0x359928u;
            goto label_359928;
        }
    }
    ctx->pc = 0x35985Cu;
    // 0x35985c: 0x0  nop
    ctx->pc = 0x35985cu;
    // NOP
label_359860:
    // 0x359860: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x359860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x359864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359868: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x359868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35986c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35986Cu;
    {
        const bool branch_taken_0x35986c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35986c) {
            ctx->pc = 0x359890u;
            goto label_359890;
        }
    }
    ctx->pc = 0x359874u;
    // 0x359874: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359878: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x359878u;
    SET_GPR_U32(ctx, 31, 0x359880u);
    ctx->pc = 0x35987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359878u;
    // 0x35987c: 0x248450a0  addiu       $a0, $a0, 0x50A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x359878u, 0x359880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359880u;
label_359880:
    // 0x359880: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x359880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x359884: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x359884u;
    {
        const bool branch_taken_0x359884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359884u;
        // 0x359888: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359884) {
            ctx->pc = 0x359928u;
            goto label_359928;
        }
    }
    ctx->pc = 0x35988Cu;
    // 0x35988c: 0x0  nop
    ctx->pc = 0x35988cu;
    // NOP
label_359890:
    // 0x359890: 0xc0d63aa  jal         func_358EA8
    ctx->pc = 0x359890u;
    SET_GPR_U32(ctx, 31, 0x359898u);
    ctx->pc = 0x359894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359890u;
    // 0x359894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358EA8u, 0x359890u, 0x359898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359898u;
label_359898:
    // 0x359898: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x359898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35989c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35989cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3598a0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3598a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3598a4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3598a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3598a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3598a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3598ac: 0x24460098  addiu       $a2, $v0, 0x98
    ctx->pc = 0x3598acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x3598b0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3598b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3598b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3598b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3598b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3598b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3598bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3598bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3598c0: 0x0  nop
    ctx->pc = 0x3598c0u;
    // NOP
    // 0x3598c4: 0x0  nop
    ctx->pc = 0x3598c4u;
    // NOP
    // 0x3598c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3598c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3598cc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3598ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3598d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3598d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3598d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3598d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3598d8: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x3598d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3598dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3598dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3598e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3598e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3598e4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3598e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3598e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3598E8u;
    {
        const bool branch_taken_0x3598e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3598ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3598E8u;
        // 0x3598ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598e8) {
            ctx->pc = 0x359900u;
            goto label_359900;
        }
    }
    ctx->pc = 0x3598F0u;
    // 0x3598f0: 0xc0d638c  jal         func_358E30
    ctx->pc = 0x3598F0u;
    SET_GPR_U32(ctx, 31, 0x3598F8u);
    ctx->pc = 0x358E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358E30u, 0x3598F0u, 0x3598F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598F8u;
label_3598f8:
    // 0x3598f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3598F8u;
    {
        const bool branch_taken_0x3598f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3598FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3598F8u;
        // 0x3598fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598f8) {
            ctx->pc = 0x359928u;
            goto label_359928;
        }
    }
    ctx->pc = 0x359900u;
label_359900:
    // 0x359900: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x359900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x359904: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x359904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359908: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x359908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35990c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x35990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x359910: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x359910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
    // 0x359914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x359914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359918: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x359918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35991c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x35991cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x359920: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x359920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x359924: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x359924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_359928:
    // 0x359928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35992c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35992cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359934: 0x3e00008  jr          $ra
    ctx->pc = 0x359934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359934u;
        // 0x359938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35993Cu;
    // 0x35993c: 0x0  nop
    ctx->pc = 0x35993cu;
    // NOP
label_359940:
    // 0x359940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359944: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x359944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359948: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x359948u;
    {
        const bool branch_taken_0x359948 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359948u;
        // 0x35994c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359948) {
            ctx->pc = 0x359968u;
            goto label_359968;
        }
    }
    ctx->pc = 0x359950u;
    // 0x359950: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359954: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x359954u;
    SET_GPR_U32(ctx, 31, 0x35995Cu);
    ctx->pc = 0x359958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359954u;
    // 0x359958: 0x248450d8  addiu       $a0, $a0, 0x50D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x359954u, 0x35995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35995Cu;
label_35995c:
    // 0x35995c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x359960: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x359960u;
    {
        const bool branch_taken_0x359960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359960u;
        // 0x359964: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359960) {
            ctx->pc = 0x3599C8u;
            goto label_3599c8;
        }
    }
    ctx->pc = 0x359968u;
label_359968:
    // 0x359968: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x359968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35996c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x35996cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x359970: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x359970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359974: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x359974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x359978: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x359978u;
    {
        const bool branch_taken_0x359978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359978) {
            ctx->pc = 0x35997Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359978u;
            // 0x35997c: 0x3c05001c  lui         $a1, 0x1C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359998u;
            goto label_359998;
        }
    }
    ctx->pc = 0x359980u;
    // 0x359980: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359984: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x359984u;
    SET_GPR_U32(ctx, 31, 0x35998Cu);
    ctx->pc = 0x359988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359984u;
    // 0x359988: 0x24845108  addiu       $a0, $a0, 0x5108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x359984u, 0x35998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35998Cu;
label_35998c:
    // 0x35998c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35998cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x359990: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x359990u;
    {
        const bool branch_taken_0x359990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359990u;
        // 0x359994: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359990) {
            ctx->pc = 0x3599C8u;
            goto label_3599c8;
        }
    }
    ctx->pc = 0x359998u;
label_359998:
    // 0x359998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35999c: 0x24a50098  addiu       $a1, $a1, 0x98
    ctx->pc = 0x35999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
    // 0x3599a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3599a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3599a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3599a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3599a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3599a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3599ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3599acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3599b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3599b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3599b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3599b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3599b8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3599b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3599bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3599bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3599c0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3599c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3599c4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3599c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_3599c8:
    // 0x3599c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3599c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3599cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3599CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3599D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3599CCu;
        // 0x3599d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3599CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3599D4u;
    // 0x3599d4: 0x0  nop
    ctx->pc = 0x3599d4u;
    // NOP
label_3599d8:
    // 0x3599d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3599d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3599dc: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3599dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3599e0: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x3599e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x3599e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3599e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3599e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3599e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3599ec: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x3599ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3599f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3599f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3599f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3599f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3599f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3599fc: 0x2412002f  addiu       $s2, $zero, 0x2F
    ctx->pc = 0x3599fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_359a00:
    // 0x359a00: 0x8e02fff8  lw          $v0, -0x8($s0)
    ctx->pc = 0x359a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x359a04: 0x58400015  blezl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x359A04u;
    {
        const bool branch_taken_0x359a04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x359a04) {
            ctx->pc = 0x359A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359A04u;
            // 0x359a08: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359A5Cu;
            goto label_359a5c;
        }
    }
    ctx->pc = 0x359A0Cu;
    // 0x359a0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x359a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359a10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x359A10u;
    {
        const bool branch_taken_0x359a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A10u;
        // 0x359a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a10) {
            ctx->pc = 0x359A58u;
            goto label_359a58;
        }
    }
    ctx->pc = 0x359A18u;
    // 0x359a18: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x359a18u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x359a1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x359a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x359a20: 0xc60cfff4  lwc1        $f12, -0xC($s0)
    ctx->pc = 0x359a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x359a24: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x359a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359a28: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x359a28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x359a2c: 0xc0d63c0  jal         func_358F00
    ctx->pc = 0x359A2Cu;
    SET_GPR_U32(ctx, 31, 0x359A34u);
    ctx->pc = 0x359A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A2Cu;
    // 0x359a30: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x358F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358F00u, 0x359A2Cu, 0x359A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A34u;
label_359a34:
    // 0x359a34: 0x8e03fff8  lw          $v1, -0x8($s0)
    ctx->pc = 0x359a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x359a38: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x359a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x359a3c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x359A3Cu;
    {
        const bool branch_taken_0x359a3c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x359A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A3Cu;
        // 0x359a40: 0xae03fff8  sw          $v1, -0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a3c) {
            ctx->pc = 0x359A58u;
            goto label_359a58;
        }
    }
    ctx->pc = 0x359A44u;
    // 0x359a44: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x359a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x359a48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x359A48u;
    {
        const bool branch_taken_0x359a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359a48) {
            ctx->pc = 0x359A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359A48u;
            // 0x359a4c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359A5Cu;
            goto label_359a5c;
        }
    }
    ctx->pc = 0x359A50u;
    // 0x359a50: 0xc0d638c  jal         func_358E30
    ctx->pc = 0x359A50u;
    SET_GPR_U32(ctx, 31, 0x359A58u);
    ctx->pc = 0x359A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A50u;
    // 0x359a54: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358E30u, 0x359A50u, 0x359A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A58u;
label_359a58:
    // 0x359a58: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x359a58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_359a5c:
    // 0x359a5c: 0x641ffe8  bgez        $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x359A5Cu;
    {
        const bool branch_taken_0x359a5c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x359A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A5Cu;
        // 0x359a60: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a5c) {
            ctx->pc = 0x359A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359a00;
        }
    }
    ctx->pc = 0x359A64u;
    // 0x359a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359a68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359a6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359a70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359a74: 0x3e00008  jr          $ra
    ctx->pc = 0x359A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A74u;
        // 0x359a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359A7Cu;
    // 0x359a7c: 0x0  nop
    ctx->pc = 0x359a7cu;
    // NOP
    // 0x359a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359a90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x359a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a94: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x359a94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x359a98: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x359a98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x359a9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x359aa0: 0xc0d752e  jal         func_35D4B8
    ctx->pc = 0x359AA0u;
    SET_GPR_U32(ctx, 31, 0x359AA8u);
    ctx->pc = 0x359AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AA0u;
    // 0x359aa4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D4B8u, 0x359AA0u, 0x359AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AA8u;
label_359aa8:
    // 0x359aa8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x359aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x359aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ab0: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x359AB0u;
    {
        const bool branch_taken_0x359ab0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x359AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359AB0u;
        // 0x359ab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359ab0) {
            ctx->pc = 0x359AE8u;
            goto label_359ae8;
        }
    }
    ctx->pc = 0x359AB8u;
    // 0x359ab8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x359ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x359abc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359ac0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x359AC0u;
    SET_GPR_U32(ctx, 31, 0x359AC8u);
    ctx->pc = 0x359AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AC0u;
    // 0x359ac4: 0x24845138  addiu       $a0, $a0, 0x5138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x359AC0u, 0x359AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AC8u;
label_359ac8:
    // 0x359ac8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x359ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x359acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359ad0: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x359ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x359ad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359adc: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x359adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x359ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x359AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359AE0u;
        // 0x359ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359AE8u;
label_359ae8:
    // 0x359ae8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x359ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x359aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359af8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x359af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x359afc: 0x80d6518  j           func_359460
    ctx->pc = 0x359AFCu;
    ctx->pc = 0x359B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AFCu;
    // 0x359b00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359460u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_359460;
    ctx->pc = 0x359B04u;
    // 0x359b04: 0x0  nop
    ctx->pc = 0x359b04u;
    // NOP
    // 0x359b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359b0c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359b14: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x359b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b1c: 0x80d6556  j           func_359558
    ctx->pc = 0x359B1Cu;
    ctx->pc = 0x359B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B1Cu;
    // 0x359b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359558u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_359558;
    ctx->pc = 0x359B24u;
    // 0x359b24: 0x0  nop
    ctx->pc = 0x359b24u;
    // NOP
    // 0x359b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359b2c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x359b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x359b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359b34: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x359b34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x359b38: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x359b38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x359b3c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x359b3cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x359b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b44: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359b48: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x359b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359b4c: 0x80d6582  j           func_359608
    ctx->pc = 0x359B4Cu;
    ctx->pc = 0x359B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B4Cu;
    // 0x359b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359608u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_359608;
    ctx->pc = 0x359B54u;
    // 0x359b54: 0x0  nop
    ctx->pc = 0x359b54u;
    // NOP
    // 0x359b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359b5c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359b64: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x359b64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b6c: 0x80d65b0  j           func_3596C0
    ctx->pc = 0x359B6Cu;
    ctx->pc = 0x359B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B6Cu;
    // 0x359b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3596C0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3596c0;
    ctx->pc = 0x359B74u;
    // 0x359b74: 0x0  nop
    ctx->pc = 0x359b74u;
    // NOP
    // 0x359b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359b7c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x359b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x359b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359b84: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x359b84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x359b88: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x359b88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x359b8c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x359b8cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x359b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b94: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359b98: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x359b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359b9c: 0x80d65dc  j           func_359770
    ctx->pc = 0x359B9Cu;
    ctx->pc = 0x359BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B9Cu;
    // 0x359ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359770u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_359770;
    ctx->pc = 0x359BA4u;
    // 0x359ba4: 0x0  nop
    ctx->pc = 0x359ba4u;
    // NOP
    // 0x359ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359bb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x359bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359bbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x359bc0: 0xc0d752e  jal         func_35D4B8
    ctx->pc = 0x359BC0u;
    SET_GPR_U32(ctx, 31, 0x359BC8u);
    ctx->pc = 0x359BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BC0u;
    // 0x359bc4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D4B8u, 0x359BC0u, 0x359BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BC8u;
label_359bc8:
    // 0x359bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359bcc: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x359BCCu;
    {
        const bool branch_taken_0x359bcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x359BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359BCCu;
        // 0x359bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359bcc) {
            ctx->pc = 0x359C00u;
            goto label_359c00;
        }
    }
    ctx->pc = 0x359BD4u;
    // 0x359bd4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x359bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x359bd8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359bdc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x359BDCu;
    SET_GPR_U32(ctx, 31, 0x359BE4u);
    ctx->pc = 0x359BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BDCu;
    // 0x359be0: 0x24845170  addiu       $a0, $a0, 0x5170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x359BDCu, 0x359BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BE4u;
label_359be4:
    // 0x359be4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x359be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x359be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359bec: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x359becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x359bf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x359BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359BF8u;
        // 0x359bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359C00u;
label_359c00:
    // 0x359c00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x359c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x359c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359c10: 0x80d660a  j           func_359828
    ctx->pc = 0x359C10u;
    ctx->pc = 0x359C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C10u;
    // 0x359c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359828u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_359828;
    ctx->pc = 0x359C18u;
    // 0x359c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359c24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x359c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359c28: 0xc0d752e  jal         func_35D4B8
    ctx->pc = 0x359C28u;
    SET_GPR_U32(ctx, 31, 0x359C30u);
    ctx->pc = 0x359C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C28u;
    // 0x359c2c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D4B8u, 0x359C28u, 0x359C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C30u;
label_359c30:
    // 0x359c30: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x359C30u;
    {
        const bool branch_taken_0x359c30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x359C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359C30u;
        // 0x359c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359c30) {
            ctx->pc = 0x359C60u;
            goto label_359c60;
        }
    }
    ctx->pc = 0x359C38u;
    // 0x359c38: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x359c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x359c3c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359c40: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x359C40u;
    SET_GPR_U32(ctx, 31, 0x359C48u);
    ctx->pc = 0x359C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C40u;
    // 0x359c44: 0x248451b0  addiu       $a0, $a0, 0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x359C40u, 0x359C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C48u;
label_359c48:
    // 0x359c48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x359c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x359c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359c50: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x359c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x359c54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359c58: 0x3e00008  jr          $ra
    ctx->pc = 0x359C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359C58u;
        // 0x359c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359C60u;
label_359c60:
    // 0x359c60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x359c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x359c64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359c6c: 0x80d6650  j           func_359940
    ctx->pc = 0x359C6Cu;
    ctx->pc = 0x359C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C6Cu;
    // 0x359c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359940u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_359940;
    ctx->pc = 0x359C74u;
    // 0x359c74: 0x0  nop
    ctx->pc = 0x359c74u;
    // NOP
    ctx->pc = 0x359c78u;
}
