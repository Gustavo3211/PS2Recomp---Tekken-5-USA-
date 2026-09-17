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

// Function: sub_00360C40
// Address: 0x360c40 - 0x361500
void sub_00360C40_0x360c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360C40_0x360c40");
#endif

    switch (ctx->pc) {
        case 0x360cb8u: goto label_360cb8;
        case 0x360cd8u: goto label_360cd8;
        case 0x360d38u: goto label_360d38;
        case 0x360d70u: goto label_360d70;
        case 0x360da8u: goto label_360da8;
        case 0x360e20u: goto label_360e20;
        case 0x360e58u: goto label_360e58;
        case 0x360e80u: goto label_360e80;
        case 0x360ee8u: goto label_360ee8;
        case 0x360f28u: goto label_360f28;
        case 0x360f68u: goto label_360f68;
        case 0x360ff0u: goto label_360ff0;
        case 0x361174u: goto label_361174;
        case 0x36119cu: goto label_36119c;
        case 0x3611b0u: goto label_3611b0;
        case 0x3611ccu: goto label_3611cc;
        case 0x3611ecu: goto label_3611ec;
        case 0x361210u: goto label_361210;
        case 0x361228u: goto label_361228;
        case 0x36125cu: goto label_36125c;
        case 0x361264u: goto label_361264;
        case 0x361288u: goto label_361288;
        case 0x3612a4u: goto label_3612a4;
        case 0x3612d8u: goto label_3612d8;
        case 0x361348u: goto label_361348;
        case 0x361374u: goto label_361374;
        case 0x36138cu: goto label_36138c;
        case 0x3613a4u: goto label_3613a4;
        case 0x3613c4u: goto label_3613c4;
        case 0x3613ccu: goto label_3613cc;
        case 0x3613fcu: goto label_3613fc;
        case 0x361418u: goto label_361418;
        case 0x361448u: goto label_361448;
        case 0x361450u: goto label_361450;
        case 0x361474u: goto label_361474;
        case 0x361490u: goto label_361490;
        case 0x361498u: goto label_361498;
        case 0x3614b0u: goto label_3614b0;
        case 0x3614c4u: goto label_3614c4;
        default: break;
    }

    ctx->pc = 0x360c40u;

label_360c40:
    // 0x360c40: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x360c40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x360c44: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x360c44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x360c48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360c4c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x360c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x360c50: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x360c50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x360c54: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x360c54u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x360c58: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x360c58u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x360c5c: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x360C5Cu;
    {
        const bool branch_taken_0x360c5c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x360C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C5Cu;
        // 0x360c60: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360c5c) {
            ctx->pc = 0x360CB0u;
            goto label_360cb0;
        }
    }
    ctx->pc = 0x360C64u;
    // 0x360c64: 0xa5460004  sh          $a2, 0x4($t2)
    ctx->pc = 0x360c64u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x360c68: 0xa5450006  sh          $a1, 0x6($t2)
    ctx->pc = 0x360c68u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x360c6c: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x360c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x360c70: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x360c70u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x360c74: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x360c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x360c78: 0xad430018  sw          $v1, 0x18($t2)
    ctx->pc = 0x360c78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 3));
    // 0x360c7c: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x360c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x360c80: 0xe54c0010  swc1        $f12, 0x10($t2)
    ctx->pc = 0x360c80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x360c84: 0xa542001e  sh          $v0, 0x1E($t2)
    ctx->pc = 0x360c84u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x360c88: 0xa5470014  sh          $a3, 0x14($t2)
    ctx->pc = 0x360c88u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x360c8c: 0xa548001c  sh          $t0, 0x1C($t2)
    ctx->pc = 0x360c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 8));
    // 0x360c90: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x360c90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x360c94: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x360c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x360c98: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x360c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x360c9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x360C9Cu;
    {
        const bool branch_taken_0x360c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360c9c) {
            ctx->pc = 0x360CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360C9Cu;
            // 0x360ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360CB0u;
            goto label_360cb0;
        }
    }
    ctx->pc = 0x360CA4u;
    // 0x360ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360ca8: 0xad420020  sw          $v0, 0x20($t2)
    ctx->pc = 0x360ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 2));
    // 0x360cac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360cb0:
    // 0x360cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x360CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360CB8u;
label_360cb8:
    // 0x360cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x360cbc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x360cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x360cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360cc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x360cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x360cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x360ccc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x360cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x360cd0: 0xc0d7c00  jal         func_35F000
    ctx->pc = 0x360CD0u;
    SET_GPR_U32(ctx, 31, 0x360CD8u);
    ctx->pc = 0x360CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360CD0u;
    // 0x360cd4: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F000u, 0x360CD0u, 0x360CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CD8u;
label_360cd8:
    // 0x360cd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x360cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cdc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360ce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x360ce4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x360ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360ce8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x360ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x360cec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x360cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cf0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x360cf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x360cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360cfc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x360cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x360d00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x360d00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d04: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x360D04u;
    {
        const bool branch_taken_0x360d04 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x360D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360D04u;
        // 0x360d08: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360d04) {
            ctx->pc = 0x360D20u;
            goto label_360d20;
        }
    }
    ctx->pc = 0x360D0Cu;
    // 0x360d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360d10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360d18: 0x80d84b6  j           func_3612D8
    ctx->pc = 0x360D18u;
    ctx->pc = 0x360D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360D18u;
    // 0x360d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3612D8u;
    goto label_3612d8;
    ctx->pc = 0x360D20u;
label_360d20:
    // 0x360d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360d24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x360D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360D2Cu;
        // 0x360d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360D34u;
    // 0x360d34: 0x0  nop
    ctx->pc = 0x360d34u;
    // NOP
label_360d38:
    // 0x360d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360d3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x360d40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x360d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360d48: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x360d48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d4c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x360d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x360d50: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x360d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x360d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x360d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x360d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x360d64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x360d64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d68: 0x80d84b6  j           func_3612D8
    ctx->pc = 0x360D68u;
    ctx->pc = 0x360D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360D68u;
    // 0x360d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3612D8u;
    goto label_3612d8;
    ctx->pc = 0x360D70u;
label_360d70:
    // 0x360d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x360d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x360d74: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x360d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x360d78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360d7c: 0x68400  sll         $s0, $a2, 16
    ctx->pc = 0x360d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x360d80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x360d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x360d84: 0x78c00  sll         $s1, $a3, 16
    ctx->pc = 0x360d84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x360d88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x360d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x360d8c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x360d8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x360d90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x360d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x360d94: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x360d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d98: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x360d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x360d9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x360d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x360da0: 0xc0d7c00  jal         func_35F000
    ctx->pc = 0x360DA0u;
    SET_GPR_U32(ctx, 31, 0x360DA8u);
    ctx->pc = 0x360DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360DA0u;
    // 0x360da4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F000u, 0x360DA0u, 0x360DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DA8u;
label_360da8:
    // 0x360da8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x360da8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360dac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360db0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x360db0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x360db4: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x360db4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x360db8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x360db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360dbc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x360dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x360dc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x360dc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x360dc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360dc8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x360dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360dcc: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x360dccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360dd0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x360dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x360dd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x360dd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360dd8: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x360DD8u;
    {
        const bool branch_taken_0x360dd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x360DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360DD8u;
        // 0x360ddc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360dd8) {
            ctx->pc = 0x360E00u;
            goto label_360e00;
        }
    }
    ctx->pc = 0x360DE0u;
    // 0x360de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360de8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x360de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360dec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x360decu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360df0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x360df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360df4: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x360df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360df8: 0x80d84b6  j           func_3612D8
    ctx->pc = 0x360DF8u;
    ctx->pc = 0x360DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360DF8u;
    // 0x360dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3612D8u;
    goto label_3612d8;
    ctx->pc = 0x360E00u;
label_360e00:
    // 0x360e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360e04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360e08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x360e08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360e0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x360e0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360e10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x360e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360e14: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x360e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360e18: 0x3e00008  jr          $ra
    ctx->pc = 0x360E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360E18u;
        // 0x360e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360E20u;
label_360e20:
    // 0x360e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360e24: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x360e24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x360e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360e2c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x360e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x360e30: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x360e30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e34: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x360e34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x360e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360e3c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x360e3cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x360e40: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x360e40u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x360e44: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x360e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x360e48: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x360e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x360e4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x360e4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e50: 0x80d84b6  j           func_3612D8
    ctx->pc = 0x360E50u;
    ctx->pc = 0x360E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E50u;
    // 0x360e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3612D8u;
    goto label_3612d8;
    ctx->pc = 0x360E58u;
label_360e58:
    // 0x360e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x360e5c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x360e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x360e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360e64: 0x68600  sll         $s0, $a2, 24
    ctx->pc = 0x360e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x360e68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x360e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x360e6c: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x360e6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x360e70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x360e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x360e74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x360e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x360e78: 0xc0d7c00  jal         func_35F000
    ctx->pc = 0x360E78u;
    SET_GPR_U32(ctx, 31, 0x360E80u);
    ctx->pc = 0x360E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E78u;
    // 0x360e7c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F000u, 0x360E78u, 0x360E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E80u;
label_360e80:
    // 0x360e80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x360e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360e88: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x360e88u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x360e8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x360e90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x360e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360e94: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x360e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x360e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x360e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e9c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x360e9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ea0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x360ea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x360ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360eac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x360eacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360eb0: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x360EB0u;
    {
        const bool branch_taken_0x360eb0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x360EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360EB0u;
        // 0x360eb4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360eb0) {
            ctx->pc = 0x360ED0u;
            goto label_360ed0;
        }
    }
    ctx->pc = 0x360EB8u;
    // 0x360eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360ec0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x360ec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360ec4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x360ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360ec8: 0x80d84b6  j           func_3612D8
    ctx->pc = 0x360EC8u;
    ctx->pc = 0x360ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360EC8u;
    // 0x360ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3612D8u;
    goto label_3612d8;
    ctx->pc = 0x360ED0u;
label_360ed0:
    // 0x360ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360ed4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360ed8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x360ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360edc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x360edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x360EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360EE0u;
        // 0x360ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360EE8u;
label_360ee8:
    // 0x360ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360eec: 0x64600  sll         $t0, $a2, 24
    ctx->pc = 0x360eecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x360ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360ef4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x360ef4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x360efc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x360efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360f00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x360f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f0c: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x360f0cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
    // 0x360f10: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x360f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x360f14: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x360f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x360f18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x360f18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f1c: 0x80d84b6  j           func_3612D8
    ctx->pc = 0x360F1Cu;
    ctx->pc = 0x360F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F1Cu;
    // 0x360f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3612D8u;
    goto label_3612d8;
    ctx->pc = 0x360F24u;
    // 0x360f24: 0x0  nop
    ctx->pc = 0x360f24u;
    // NOP
label_360f28:
    // 0x360f28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x360f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x360f2c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x360f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x360f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360f34: 0x78400  sll         $s0, $a3, 16
    ctx->pc = 0x360f34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x360f38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x360f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x360f3c: 0x88c00  sll         $s1, $t0, 16
    ctx->pc = 0x360f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x360f40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x360f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x360f44: 0x69600  sll         $s2, $a2, 24
    ctx->pc = 0x360f44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x360f48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x360f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x360f4c: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x360f4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x360f50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x360f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x360f54: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x360f54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f58: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x360f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x360f5c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x360f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x360f60: 0xc0d7c00  jal         func_35F000
    ctx->pc = 0x360F60u;
    SET_GPR_U32(ctx, 31, 0x360F68u);
    ctx->pc = 0x360F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F60u;
    // 0x360f64: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F000u, 0x360F60u, 0x360F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F68u;
label_360f68:
    // 0x360f68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x360f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360f70: 0x129603  sra         $s2, $s2, 24
    ctx->pc = 0x360f70u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 24));
    // 0x360f74: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x360f74u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x360f78: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x360f78u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x360f7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x360f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x360f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x360f84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x360f84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x360f88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x360f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f90: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x360f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f94: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x360f94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x360f98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f9c: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x360F9Cu;
    {
        const bool branch_taken_0x360f9c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x360FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360F9Cu;
        // 0x360fa0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360f9c) {
            ctx->pc = 0x360FC8u;
            goto label_360fc8;
        }
    }
    ctx->pc = 0x360FA4u;
    // 0x360fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360fac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x360facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360fb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x360fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360fb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x360fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360fb8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x360fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360fbc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x360fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360fc0: 0x80d84b6  j           func_3612D8
    ctx->pc = 0x360FC0u;
    ctx->pc = 0x360FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360FC0u;
    // 0x360fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3612D8u;
    goto label_3612d8;
    ctx->pc = 0x360FC8u;
label_360fc8:
    // 0x360fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360fd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x360fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360fd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x360fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360fd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x360fd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360fdc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x360fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360fe0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x360fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x360FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360FE4u;
        // 0x360fe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360FECu;
    // 0x360fec: 0x0  nop
    ctx->pc = 0x360fecu;
    // NOP
label_360ff0:
    // 0x360ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360ff4: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x360ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x360ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360ffc: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x360ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x361000: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x361000u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x361004: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x361004u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36100c: 0x64603  sra         $t0, $a2, 24
    ctx->pc = 0x36100cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 24));
    // 0x361010: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x361010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361014: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x361014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x361018: 0x73403  sra         $a2, $a3, 16
    ctx->pc = 0x361018u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 16));
    // 0x36101c: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x36101cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x361020: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x361020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x361024: 0x80d84b6  j           func_3612D8
    ctx->pc = 0x361024u;
    ctx->pc = 0x361028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361024u;
    // 0x361028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3612D8u;
    goto label_3612d8;
    ctx->pc = 0x36102Cu;
    // 0x36102c: 0x0  nop
    ctx->pc = 0x36102cu;
    // NOP
    // 0x361030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x361030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x361034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x361034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x361038: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x361038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36103c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361040: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x361040u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361044: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x361044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x361048: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x361048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36104c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36104cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x361050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361054: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x361054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x361058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x361058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36105c: 0x80d8444  j           func_361110
    ctx->pc = 0x36105Cu;
    ctx->pc = 0x361060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36105Cu;
    // 0x361060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361110u;
    goto label_361110;
    ctx->pc = 0x361064u;
    // 0x361064: 0x0  nop
    ctx->pc = 0x361064u;
    // NOP
    // 0x361068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x361068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36106c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x36106cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x361070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x361070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361074: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x361074u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x361078: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x361078u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36107c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x36107cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x361080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361084: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x361084u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x361088: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x361088u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x36108c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x36108cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x361090: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x361090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361094: 0x80d8444  j           func_361110
    ctx->pc = 0x361094u;
    ctx->pc = 0x361098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361094u;
    // 0x361098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361110u;
    goto label_361110;
    ctx->pc = 0x36109Cu;
    // 0x36109c: 0x0  nop
    ctx->pc = 0x36109cu;
    // NOP
    // 0x3610a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3610a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3610a4: 0x64600  sll         $t0, $a2, 24
    ctx->pc = 0x3610a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3610a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3610a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3610ac: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x3610acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3610b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3610b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3610b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3610b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3610b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3610bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3610c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3610c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610c4: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x3610c4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
    // 0x3610c8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3610c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3610cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3610ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610d0: 0x80d8444  j           func_361110
    ctx->pc = 0x3610D0u;
    ctx->pc = 0x3610D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3610D0u;
    // 0x3610d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361110u;
    goto label_361110;
    ctx->pc = 0x3610D8u;
    // 0x3610d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3610d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3610dc: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x3610dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x3610e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3610e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3610e4: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x3610e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3610e8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x3610e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x3610ec: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x3610ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3610f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3610f4: 0x64603  sra         $t0, $a2, 24
    ctx->pc = 0x3610f4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 24));
    // 0x3610f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3610f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610fc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3610fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x361100: 0x73403  sra         $a2, $a3, 16
    ctx->pc = 0x361100u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 16));
    // 0x361104: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x361104u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x361108: 0x80d8444  j           func_361110
    ctx->pc = 0x361108u;
    ctx->pc = 0x36110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361108u;
    // 0x36110c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361110u;
    goto label_361110;
    ctx->pc = 0x361110u;
label_361110:
    // 0x361110: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x361110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x361114: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x361114u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x361118: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x361118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x36111c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x36111cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361120: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x361120u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x361124: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x361124u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x361128: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x361128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x36112c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x36112cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x361130: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x361130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x361134: 0x89e03  sra         $s3, $t0, 24
    ctx->pc = 0x361134u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 8), 24));
    // 0x361138: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x361138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x36113c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x36113cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361140: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x361140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x361144: 0x6ac03  sra         $s5, $a2, 16
    ctx->pc = 0x361144u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 16));
    // 0x361148: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x361148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x36114c: 0x7b403  sra         $s6, $a3, 16
    ctx->pc = 0x36114cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 7), 16));
    // 0x361150: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x361150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x361154: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x361154u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x361158: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x361158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x36115c: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x36115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x361160: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x361160u;
    {
        const bool branch_taken_0x361160 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x361164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361160u;
        // 0x361164: 0xe7b500f8  swc1        $f21, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x361160) {
            ctx->pc = 0x361180u;
            goto label_361180;
        }
    }
    ctx->pc = 0x361168u;
    // 0x361168: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x36116c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36116Cu;
    SET_GPR_U32(ctx, 31, 0x361174u);
    ctx->pc = 0x361170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36116Cu;
    // 0x361170: 0x24846d68  addiu       $a0, $a0, 0x6D68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36116Cu, 0x361174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361174u;
label_361174:
    // 0x361174: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361178: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x361178u;
    {
        const bool branch_taken_0x361178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361178u;
        // 0x36117c: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361178) {
            ctx->pc = 0x3612A8u;
            goto label_3612a8;
        }
    }
    ctx->pc = 0x361180u;
label_361180:
    // 0x361180: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x361180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x361184: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x361184u;
    {
        const bool branch_taken_0x361184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361184u;
        // 0x361188: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361184) {
            ctx->pc = 0x3611A8u;
            goto label_3611a8;
        }
    }
    ctx->pc = 0x36118Cu;
    // 0x36118c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36118cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361190: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x361190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361194: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361194u;
    SET_GPR_U32(ctx, 31, 0x36119Cu);
    ctx->pc = 0x361198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361194u;
    // 0x361198: 0x24846da0  addiu       $a0, $a0, 0x6DA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361194u, 0x36119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36119Cu;
label_36119c:
    // 0x36119c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x36119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3611a0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3611A0u;
    {
        const bool branch_taken_0x3611a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3611A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3611A0u;
        // 0x3611a4: 0x34420019  ori         $v0, $v0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3611a0) {
            ctx->pc = 0x3612A8u;
            goto label_3612a8;
        }
    }
    ctx->pc = 0x3611A8u;
label_3611a8:
    // 0x3611a8: 0xc0d7c50  jal         func_35F140
    ctx->pc = 0x3611A8u;
    SET_GPR_U32(ctx, 31, 0x3611B0u);
    ctx->pc = 0x3611ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3611A8u;
    // 0x3611ac: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F140u, 0x3611A8u, 0x3611B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3611B0u;
label_3611b0:
    // 0x3611b0: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x3611B0u;
    {
        const bool branch_taken_0x3611b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3611b0) {
            ctx->pc = 0x3611B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3611B0u;
            // 0x3611b4: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3612ACu;
            goto label_3612ac;
        }
    }
    ctx->pc = 0x3611B8u;
    // 0x3611b8: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x3611b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3611bc: 0x1680000c  bnez        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x3611BCu;
    {
        const bool branch_taken_0x3611bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3611C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3611BCu;
        // 0x3611c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3611bc) {
            ctx->pc = 0x3611F0u;
            goto label_3611f0;
        }
    }
    ctx->pc = 0x3611C4u;
    // 0x3611c4: 0xc0d82d8  jal         func_360B60
    ctx->pc = 0x3611C4u;
    SET_GPR_U32(ctx, 31, 0x3611CCu);
    ctx->pc = 0x3611C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3611C4u;
    // 0x3611c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360B60u, 0x3611C4u, 0x3611CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3611CCu;
label_3611cc:
    // 0x3611cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3611ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611d0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3611d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3611d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3611d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3611d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3611dc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3611dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611e0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3611e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611e4: 0xc0d82ec  jal         func_360BB0
    ctx->pc = 0x3611E4u;
    SET_GPR_U32(ctx, 31, 0x3611ECu);
    ctx->pc = 0x3611E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3611E4u;
    // 0x3611e8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360BB0u, 0x3611E4u, 0x3611ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3611ECu;
label_3611ec:
    // 0x3611ec: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x3611ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3611f0:
    // 0x3611f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3611f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3611f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3611f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3611f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3611f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3611fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361200: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x361200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x361204: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x361204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361208: 0xc0d7152  jal         func_35C548
    ctx->pc = 0x361208u;
    SET_GPR_U32(ctx, 31, 0x361210u);
    ctx->pc = 0x36120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361208u;
    // 0x36120c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C548u, 0x361208u, 0x361210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361210u;
label_361210:
    // 0x361210: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361214: 0x56800024  bnel        $s4, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x361214u;
    {
        const bool branch_taken_0x361214 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x361214) {
            ctx->pc = 0x361218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361214u;
            // 0x361218: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3612A8u;
            goto label_3612a8;
        }
    }
    ctx->pc = 0x36121Cu;
    // 0x36121c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x36121cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361220: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361220u;
    SET_GPR_U32(ctx, 31, 0x361228u);
    ctx->pc = 0x361224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361220u;
    // 0x361224: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361220u, 0x361228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361228u;
label_361228:
    // 0x361228: 0x93a30036  lbu         $v1, 0x36($sp)
    ctx->pc = 0x361228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 54)));
    // 0x36122c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x36122Cu;
    {
        const bool branch_taken_0x36122c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x361230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36122Cu;
        // 0x361230: 0x93a20037  lbu         $v0, 0x37($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 55)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36122c) {
            ctx->pc = 0x3612A4u;
            goto label_3612a4;
        }
    }
    ctx->pc = 0x361234u;
    // 0x361234: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x361234u;
    {
        const bool branch_taken_0x361234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361234u;
        // 0x361238: 0x2c42007f  sltiu       $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361234) {
            ctx->pc = 0x3612A4u;
            goto label_3612a4;
        }
    }
    ctx->pc = 0x36123Cu;
    // 0x36123c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x36123Cu;
    {
        const bool branch_taken_0x36123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36123c) {
            ctx->pc = 0x361240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36123Cu;
            // 0x361240: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3612A8u;
            goto label_3612a8;
        }
    }
    ctx->pc = 0x361244u;
    // 0x361244: 0x93a60037  lbu         $a2, 0x37($sp)
    ctx->pc = 0x361244u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 55)));
    // 0x361248: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x36124c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x36124cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361250: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x361250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361254: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361254u;
    SET_GPR_U32(ctx, 31, 0x36125Cu);
    ctx->pc = 0x361258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361254u;
    // 0x361258: 0x24846dd8  addiu       $a0, $a0, 0x6DD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361254u, 0x36125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36125Cu;
label_36125c:
    // 0x36125c: 0xc0d82d8  jal         func_360B60
    ctx->pc = 0x36125Cu;
    SET_GPR_U32(ctx, 31, 0x361264u);
    ctx->pc = 0x361260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36125Cu;
    // 0x361260: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360B60u, 0x36125Cu, 0x361264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361264u;
label_361264:
    // 0x361264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x361264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361268: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x361268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36126c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x36126cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x361270: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x361270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361274: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x361274u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x361278: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x361278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36127c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x36127cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361280: 0xc0d8310  jal         func_360C40
    ctx->pc = 0x361280u;
    SET_GPR_U32(ctx, 31, 0x361288u);
    ctx->pc = 0x361284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361280u;
    // 0x361284: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360C40u;
    goto label_360c40;
    ctx->pc = 0x361288u;
label_361288:
    // 0x361288: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x361288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36128c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x36128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x361290: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x361290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361294: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x361294u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x361298: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x361298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36129c: 0xc0d7152  jal         func_35C548
    ctx->pc = 0x36129Cu;
    SET_GPR_U32(ctx, 31, 0x3612A4u);
    ctx->pc = 0x3612A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36129Cu;
    // 0x3612a0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C548u, 0x36129Cu, 0x3612A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3612A4u;
label_3612a4:
    // 0x3612a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3612a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3612a8:
    // 0x3612a8: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x3612a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3612ac:
    // 0x3612ac: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x3612acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3612b0: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x3612b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3612b4: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x3612b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3612b8: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x3612b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3612bc: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x3612bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3612c0: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x3612c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3612c4: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x3612c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3612c8: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x3612c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3612cc: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3612ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3612d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3612D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3612D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3612D0u;
        // 0x3612d4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3612D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3612D8u;
label_3612d8:
    // 0x3612d8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3612d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3612dc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3612dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3612e0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x3612e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x3612e4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x3612e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3612e8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x3612e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x3612ec: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x3612ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x3612f0: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x3612f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x3612f4: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x3612f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3612f8: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x3612f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x3612fc: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x3612fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x361300: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x361300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x361304: 0x89e03  sra         $s3, $t0, 24
    ctx->pc = 0x361304u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 8), 24));
    // 0x361308: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x361308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x36130c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x36130cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361310: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x361310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x361314: 0x6b403  sra         $s6, $a2, 16
    ctx->pc = 0x361314u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 6), 16));
    // 0x361318: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x361318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x36131c: 0x7bc03  sra         $s7, $a3, 16
    ctx->pc = 0x36131cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 7), 16));
    // 0x361320: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x361320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x361324: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x361324u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x361328: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x361328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x36132c: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x36132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x361330: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x361330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x361334: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x361334u;
    {
        const bool branch_taken_0x361334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x361338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361334u;
        // 0x361338: 0xe7b50108  swc1        $f21, 0x108($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x361334) {
            ctx->pc = 0x361358u;
            goto label_361358;
        }
    }
    ctx->pc = 0x36133Cu;
    // 0x36133c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361340: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361340u;
    SET_GPR_U32(ctx, 31, 0x361348u);
    ctx->pc = 0x361344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361340u;
    // 0x361344: 0x24846d68  addiu       $a0, $a0, 0x6D68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361340u, 0x361348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361348u;
label_361348:
    // 0x361348: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36134c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x36134Cu;
    {
        const bool branch_taken_0x36134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36134Cu;
        // 0x361350: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36134c) {
            ctx->pc = 0x3614C8u;
            goto label_3614c8;
        }
    }
    ctx->pc = 0x361354u;
    // 0x361354: 0x0  nop
    ctx->pc = 0x361354u;
    // NOP
label_361358:
    // 0x361358: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x361358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36135c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x36135Cu;
    {
        const bool branch_taken_0x36135c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36135c) {
            ctx->pc = 0x361360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36135Cu;
            // 0x361360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361380u;
            goto label_361380;
        }
    }
    ctx->pc = 0x361364u;
    // 0x361364: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x361368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36136c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36136Cu;
    SET_GPR_U32(ctx, 31, 0x361374u);
    ctx->pc = 0x361370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36136Cu;
    // 0x361370: 0x24846da0  addiu       $a0, $a0, 0x6DA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36136Cu, 0x361374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361374u;
label_361374:
    // 0x361374: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361378: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x361378u;
    {
        const bool branch_taken_0x361378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361378u;
        // 0x36137c: 0x34420019  ori         $v0, $v0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361378) {
            ctx->pc = 0x3614C8u;
            goto label_3614c8;
        }
    }
    ctx->pc = 0x361380u;
label_361380:
    // 0x361380: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x361380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361384: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x361384u;
    SET_GPR_U32(ctx, 31, 0x36138Cu);
    ctx->pc = 0x361388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361384u;
    // 0x361388: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x361384u, 0x36138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36138Cu;
label_36138c:
    // 0x36138c: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x36138Cu;
    {
        const bool branch_taken_0x36138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36138c) {
            ctx->pc = 0x361390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36138Cu;
            // 0x361390: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3614CCu;
            goto label_3614cc;
        }
    }
    ctx->pc = 0x361394u;
    // 0x361394: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x361394u;
    {
        const bool branch_taken_0x361394 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x361398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361394u;
        // 0x361398: 0x8fb500a0  lw          $s5, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361394) {
            ctx->pc = 0x3613C4u;
            goto label_3613c4;
        }
    }
    ctx->pc = 0x36139Cu;
    // 0x36139c: 0xc0d82d8  jal         func_360B60
    ctx->pc = 0x36139Cu;
    SET_GPR_U32(ctx, 31, 0x3613A4u);
    ctx->pc = 0x3613A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36139Cu;
    // 0x3613a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360B60u, 0x36139Cu, 0x3613A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3613A4u;
label_3613a4:
    // 0x3613a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3613a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3613a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3613acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3613b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3613b4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3613b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613b8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3613b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613bc: 0xc0d82ec  jal         func_360BB0
    ctx->pc = 0x3613BCu;
    SET_GPR_U32(ctx, 31, 0x3613C4u);
    ctx->pc = 0x3613C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3613BCu;
    // 0x3613c0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360BB0u, 0x3613BCu, 0x3613C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3613C4u;
label_3613c4:
    // 0x3613c4: 0xc0d922a  jal         func_3648A8
    ctx->pc = 0x3613C4u;
    SET_GPR_U32(ctx, 31, 0x3613CCu);
    ctx->pc = 0x3613C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3613C4u;
    // 0x3613c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3648A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3648A8u, 0x3613C4u, 0x3613CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3613CCu;
label_3613cc:
    // 0x3613cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3613ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3613d0: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3613D0u;
    {
        const bool branch_taken_0x3613d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3613D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3613D0u;
        // 0x3613d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3613d0) {
            ctx->pc = 0x3614C8u;
            goto label_3614c8;
        }
    }
    ctx->pc = 0x3613D8u;
    // 0x3613d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3613d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3613dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3613dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3613e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3613e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613e4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x3613e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3613e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3613e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3613ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3613f0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3613f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3613f4: 0xc0d7152  jal         func_35C548
    ctx->pc = 0x3613F4u;
    SET_GPR_U32(ctx, 31, 0x3613FCu);
    ctx->pc = 0x3613F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3613F4u;
    // 0x3613f8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C548u, 0x3613F4u, 0x3613FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3613FCu;
label_3613fc:
    // 0x3613fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3613fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361400: 0x56800023  bnel        $s4, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x361400u;
    {
        const bool branch_taken_0x361400 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x361400) {
            ctx->pc = 0x361404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361400u;
            // 0x361404: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361490u;
            goto label_361490;
        }
    }
    ctx->pc = 0x361408u;
    // 0x361408: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36140c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36140cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x361410: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361410u;
    SET_GPR_U32(ctx, 31, 0x361418u);
    ctx->pc = 0x361414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361410u;
    // 0x361414: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361410u, 0x361418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361418u;
label_361418:
    // 0x361418: 0x93a30036  lbu         $v1, 0x36($sp)
    ctx->pc = 0x361418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 54)));
    // 0x36141c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x36141Cu;
    {
        const bool branch_taken_0x36141c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x361420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36141Cu;
        // 0x361420: 0x93a20037  lbu         $v0, 0x37($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 55)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36141c) {
            ctx->pc = 0x361490u;
            goto label_361490;
        }
    }
    ctx->pc = 0x361424u;
    // 0x361424: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x361424u;
    {
        const bool branch_taken_0x361424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361424u;
        // 0x361428: 0x2c42007f  sltiu       $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361424) {
            ctx->pc = 0x361490u;
            goto label_361490;
        }
    }
    ctx->pc = 0x36142Cu;
    // 0x36142c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36142Cu;
    {
        const bool branch_taken_0x36142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36142Cu;
        // 0x361430: 0x93a60037  lbu         $a2, 0x37($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 55)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36142c) {
            ctx->pc = 0x361490u;
            goto label_361490;
        }
    }
    ctx->pc = 0x361434u;
    // 0x361434: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361438: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x361438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36143c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36143cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361440: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361440u;
    SET_GPR_U32(ctx, 31, 0x361448u);
    ctx->pc = 0x361444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361440u;
    // 0x361444: 0x24846dd8  addiu       $a0, $a0, 0x6DD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361440u, 0x361448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361448u;
label_361448:
    // 0x361448: 0xc0d82d8  jal         func_360B60
    ctx->pc = 0x361448u;
    SET_GPR_U32(ctx, 31, 0x361450u);
    ctx->pc = 0x36144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361448u;
    // 0x36144c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360B60u, 0x361448u, 0x361450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361450u;
label_361450:
    // 0x361450: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x361450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361454: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x361454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x361458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x361458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36145c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36145cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361460: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x361460u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x361464: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x361464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361468: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x361468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36146c: 0xc0d8310  jal         func_360C40
    ctx->pc = 0x36146Cu;
    SET_GPR_U32(ctx, 31, 0x361474u);
    ctx->pc = 0x361470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36146Cu;
    // 0x361470: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360C40u;
    goto label_360c40;
    ctx->pc = 0x361474u;
label_361474:
    // 0x361474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x361474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361478: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x361478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36147c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x36147cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361480: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x361480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x361484: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x361484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361488: 0xc0d7152  jal         func_35C548
    ctx->pc = 0x361488u;
    SET_GPR_U32(ctx, 31, 0x361490u);
    ctx->pc = 0x36148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361488u;
    // 0x36148c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C548u, 0x361488u, 0x361490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361490u;
label_361490:
    // 0x361490: 0xc0d7bc2  jal         func_35EF08
    ctx->pc = 0x361490u;
    SET_GPR_U32(ctx, 31, 0x361498u);
    ctx->pc = 0x361494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361490u;
    // 0x361494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF08u, 0x361490u, 0x361498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361498u;
label_361498:
    // 0x361498: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x361498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36149c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36149Cu;
    {
        const bool branch_taken_0x36149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3614A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36149Cu;
        // 0x3614a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36149c) {
            ctx->pc = 0x3614C4u;
            goto label_3614c4;
        }
    }
    ctx->pc = 0x3614A4u;
    // 0x3614a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3614a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614a8: 0xc0d8f70  jal         func_363DC0
    ctx->pc = 0x3614A8u;
    SET_GPR_U32(ctx, 31, 0x3614B0u);
    ctx->pc = 0x3614ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3614A8u;
    // 0x3614ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363DC0u, 0x3614A8u, 0x3614B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3614B0u;
label_3614b0:
    // 0x3614b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3614b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3614b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614b8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3614b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3614bc: 0xc0d924e  jal         func_364938
    ctx->pc = 0x3614BCu;
    SET_GPR_U32(ctx, 31, 0x3614C4u);
    ctx->pc = 0x3614C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3614BCu;
    // 0x3614c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364938u, 0x3614BCu, 0x3614C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3614C4u;
label_3614c4:
    // 0x3614c4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3614c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3614c8:
    // 0x3614c8: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x3614c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3614cc:
    // 0x3614cc: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x3614ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3614d0: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x3614d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3614d4: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x3614d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3614d8: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x3614d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3614dc: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x3614dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3614e0: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x3614e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3614e4: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x3614e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3614e8: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x3614e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3614ec: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x3614ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x3614f0: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x3614f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3614f4: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3614f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3614f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3614F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3614FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3614F8u;
        // 0x3614fc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3614F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361500u;
}
