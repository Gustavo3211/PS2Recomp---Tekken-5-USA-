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

// Function: sub_002619B0
// Address: 0x2619b0 - 0x261ce0
void sub_002619B0_0x2619b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002619B0_0x2619b0");
#endif

    switch (ctx->pc) {
        case 0x261a48u: goto label_261a48;
        case 0x261a5cu: goto label_261a5c;
        case 0x261a6cu: goto label_261a6c;
        case 0x261a78u: goto label_261a78;
        case 0x261a84u: goto label_261a84;
        case 0x261a90u: goto label_261a90;
        case 0x261aa0u: goto label_261aa0;
        case 0x261ab0u: goto label_261ab0;
        case 0x261ac0u: goto label_261ac0;
        case 0x261ad0u: goto label_261ad0;
        case 0x261adcu: goto label_261adc;
        case 0x261afcu: goto label_261afc;
        case 0x261b0cu: goto label_261b0c;
        case 0x261b18u: goto label_261b18;
        case 0x261b24u: goto label_261b24;
        case 0x261b30u: goto label_261b30;
        case 0x261b3cu: goto label_261b3c;
        case 0x261b48u: goto label_261b48;
        case 0x261b54u: goto label_261b54;
        case 0x261b64u: goto label_261b64;
        case 0x261b74u: goto label_261b74;
        case 0x261b80u: goto label_261b80;
        case 0x261b94u: goto label_261b94;
        case 0x261ba0u: goto label_261ba0;
        case 0x261bacu: goto label_261bac;
        case 0x261bb8u: goto label_261bb8;
        case 0x261bc4u: goto label_261bc4;
        case 0x261bd4u: goto label_261bd4;
        case 0x261be0u: goto label_261be0;
        case 0x261bf4u: goto label_261bf4;
        case 0x261c00u: goto label_261c00;
        case 0x261c10u: goto label_261c10;
        case 0x261c1cu: goto label_261c1c;
        case 0x261c30u: goto label_261c30;
        case 0x261c3cu: goto label_261c3c;
        case 0x261c48u: goto label_261c48;
        case 0x261c54u: goto label_261c54;
        case 0x261c5cu: goto label_261c5c;
        default: break;
    }

    ctx->pc = 0x2619b0u;

    // 0x2619b0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x2619b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x2619b4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2619b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2619b8: 0xffb001f0  sd          $s0, 0x1F0($sp)
    ctx->pc = 0x2619b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 16));
    // 0x2619bc: 0xffb101f8  sd          $s1, 0x1F8($sp)
    ctx->pc = 0x2619bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 17));
    // 0x2619c0: 0xffb20200  sd          $s2, 0x200($sp)
    ctx->pc = 0x2619c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 18));
    // 0x2619c4: 0xffb30208  sd          $s3, 0x208($sp)
    ctx->pc = 0x2619c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 19));
    // 0x2619c8: 0xffb40210  sd          $s4, 0x210($sp)
    ctx->pc = 0x2619c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 20));
    // 0x2619cc: 0xffb50218  sd          $s5, 0x218($sp)
    ctx->pc = 0x2619ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 21));
    // 0x2619d0: 0xffb60220  sd          $s6, 0x220($sp)
    ctx->pc = 0x2619d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 22));
    // 0x2619d4: 0xffb70228  sd          $s7, 0x228($sp)
    ctx->pc = 0x2619d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 23));
    // 0x2619d8: 0xe7b50248  swc1        $f21, 0x248($sp)
    ctx->pc = 0x2619d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2619dc: 0xe7b40240  swc1        $f20, 0x240($sp)
    ctx->pc = 0x2619dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x2619e0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2619e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2619e4: 0xffbe0230  sd          $fp, 0x230($sp)
    ctx->pc = 0x2619e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 30));
    // 0x2619e8: 0xffbf0238  sd          $ra, 0x238($sp)
    ctx->pc = 0x2619e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 31));
    // 0x2619ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2619ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2619f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2619f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2619f4: 0x85240012  lh          $a0, 0x12($t1)
    ctx->pc = 0x2619f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 18)));
    // 0x2619f8: 0x8d2a0894  lw          $t2, 0x894($t1)
    ctx->pc = 0x2619f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2196)));
    // 0x2619fc: 0x25290720  addiu       $t1, $t1, 0x720
    ctx->pc = 0x2619fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1824));
    // 0x261a00: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x261a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x261a04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x261a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x261a08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x261a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x261a0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x261a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x261a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x261a14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x261a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x261a18: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x261a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x261a1c: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x261a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x261a20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261a24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a28: 0xe2b021  addu        $s6, $a3, $v0
    ctx->pc = 0x261a28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x261a2c: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x261a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x261a30: 0x26c40004  addiu       $a0, $s6, 0x4
    ctx->pc = 0x261a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x261a34: 0x102b821  addu        $s7, $t0, $v0
    ctx->pc = 0x261a34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x261a38: 0x8d5e001c  lw          $fp, 0x1C($t2)
    ctx->pc = 0x261a38u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x261a3c: 0x46140541  sub.s       $f21, $f0, $f20
    ctx->pc = 0x261a3cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x261a40: 0xc098ae0  jal         func_262B80
    ctx->pc = 0x261A40u;
    SET_GPR_U32(ctx, 31, 0x261A48u);
    ctx->pc = 0x261A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A40u;
    // 0x261a44: 0xafa901e0  sw          $t1, 0x1E0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B80u, 0x261A40u, 0x261A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A48u;
label_261a48:
    // 0x261a48: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x261a48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261a4c: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x261a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x261a50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x261a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a54: 0xc098ae0  jal         func_262B80
    ctx->pc = 0x261A54u;
    SET_GPR_U32(ctx, 31, 0x261A5Cu);
    ctx->pc = 0x261A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A54u;
    // 0x261a58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B80u, 0x261A54u, 0x261A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A5Cu;
label_261a5c:
    // 0x261a5c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x261a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x261a60: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x261a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x261a64: 0xc0849c0  jal         func_212700
    ctx->pc = 0x261A64u;
    SET_GPR_U32(ctx, 31, 0x261A6Cu);
    ctx->pc = 0x261A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A64u;
    // 0x261a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x261A64u, 0x261A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A6Cu;
label_261a6c:
    // 0x261a6c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x261a6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x261a70: 0xc0849c0  jal         func_212700
    ctx->pc = 0x261A70u;
    SET_GPR_U32(ctx, 31, 0x261A78u);
    ctx->pc = 0x261A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A70u;
    // 0x261a74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x261A70u, 0x261A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A78u;
label_261a78:
    // 0x261a78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x261a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a7c: 0xc097084  jal         func_25C210
    ctx->pc = 0x261A7Cu;
    SET_GPR_U32(ctx, 31, 0x261A84u);
    ctx->pc = 0x261A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A7Cu;
    // 0x261a80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x261A7Cu, 0x261A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A84u;
label_261a84:
    // 0x261a84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x261a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a88: 0xc097084  jal         func_25C210
    ctx->pc = 0x261A88u;
    SET_GPR_U32(ctx, 31, 0x261A90u);
    ctx->pc = 0x261A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A88u;
    // 0x261a8c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x261A88u, 0x261A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A90u;
label_261a90:
    // 0x261a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a94: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x261a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x261a98: 0xc098b60  jal         func_262D80
    ctx->pc = 0x261A98u;
    SET_GPR_U32(ctx, 31, 0x261AA0u);
    ctx->pc = 0x261A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A98u;
    // 0x261a9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D80u, 0x261A98u, 0x261AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AA0u;
label_261aa0:
    // 0x261aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261aa4: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x261aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x261aa8: 0xc098b60  jal         func_262D80
    ctx->pc = 0x261AA8u;
    SET_GPR_U32(ctx, 31, 0x261AB0u);
    ctx->pc = 0x261AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AA8u;
    // 0x261aac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D80u, 0x261AA8u, 0x261AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AB0u;
label_261ab0:
    // 0x261ab0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x261ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x261ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ab8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x261AB8u;
    SET_GPR_U32(ctx, 31, 0x261AC0u);
    ctx->pc = 0x261ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AB8u;
    // 0x261abc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x261AB8u, 0x261AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AC0u;
label_261ac0:
    // 0x261ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x261ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x261ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ac8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x261AC8u;
    SET_GPR_U32(ctx, 31, 0x261AD0u);
    ctx->pc = 0x261ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AC8u;
    // 0x261acc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x261AC8u, 0x261AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AD0u;
label_261ad0:
    // 0x261ad0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x261ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ad4: 0xc084814  jal         func_212050
    ctx->pc = 0x261AD4u;
    SET_GPR_U32(ctx, 31, 0x261ADCu);
    ctx->pc = 0x261AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AD4u;
    // 0x261ad8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x261AD4u, 0x261ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261ADCu;
label_261adc:
    // 0x261adc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x261adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261ae0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x261ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261ae4: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
    ctx->pc = 0x261AE4u;
    {
        const bool branch_taken_0x261ae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261ae4) {
            ctx->pc = 0x261AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261AE4u;
            // 0x261ae8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261C08u;
            goto label_261c08;
        }
    }
    ctx->pc = 0x261AECu;
    // 0x261aec: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x261aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261af0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x261af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261af4: 0xc084986  jal         func_212618
    ctx->pc = 0x261AF4u;
    SET_GPR_U32(ctx, 31, 0x261AFCu);
    ctx->pc = 0x261AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AF4u;
    // 0x261af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212618u, 0x261AF4u, 0x261AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AFCu;
label_261afc:
    // 0x261afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x261b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b04: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x261B04u;
    SET_GPR_U32(ctx, 31, 0x261B0Cu);
    ctx->pc = 0x261B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B04u;
    // 0x261b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x261B04u, 0x261B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B0Cu;
label_261b0c:
    // 0x261b0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x261b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b10: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x261B10u;
    SET_GPR_U32(ctx, 31, 0x261B18u);
    ctx->pc = 0x261B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B10u;
    // 0x261b14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x261B10u, 0x261B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B18u;
label_261b18:
    // 0x261b18: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x261b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x261b1c: 0xc0849c0  jal         func_212700
    ctx->pc = 0x261B1Cu;
    SET_GPR_U32(ctx, 31, 0x261B24u);
    ctx->pc = 0x261B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B1Cu;
    // 0x261b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x261B1Cu, 0x261B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B24u;
label_261b24:
    // 0x261b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b28: 0xc097084  jal         func_25C210
    ctx->pc = 0x261B28u;
    SET_GPR_U32(ctx, 31, 0x261B30u);
    ctx->pc = 0x261B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B28u;
    // 0x261b2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x261B28u, 0x261B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B30u;
label_261b30:
    // 0x261b30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x261b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b34: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x261B34u;
    SET_GPR_U32(ctx, 31, 0x261B3Cu);
    ctx->pc = 0x261B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B34u;
    // 0x261b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x261B34u, 0x261B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B3Cu;
label_261b3c:
    // 0x261b3c: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x261b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x261b40: 0xc098ae0  jal         func_262B80
    ctx->pc = 0x261B40u;
    SET_GPR_U32(ctx, 31, 0x261B48u);
    ctx->pc = 0x261B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B40u;
    // 0x261b44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B80u, 0x261B40u, 0x261B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B48u;
label_261b48:
    // 0x261b48: 0x26e4000c  addiu       $a0, $s7, 0xC
    ctx->pc = 0x261b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x261b4c: 0xc098ae0  jal         func_262B80
    ctx->pc = 0x261B4Cu;
    SET_GPR_U32(ctx, 31, 0x261B54u);
    ctx->pc = 0x261B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B4Cu;
    // 0x261b50: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B80u, 0x261B4Cu, 0x261B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B54u;
label_261b54:
    // 0x261b54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x261b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b58: 0x27b101a0  addiu       $s1, $sp, 0x1A0
    ctx->pc = 0x261b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x261b5c: 0xc097084  jal         func_25C210
    ctx->pc = 0x261B5Cu;
    SET_GPR_U32(ctx, 31, 0x261B64u);
    ctx->pc = 0x261B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B5Cu;
    // 0x261b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x261B5Cu, 0x261B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B64u;
label_261b64:
    // 0x261b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x261b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b6c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x261B6Cu;
    SET_GPR_U32(ctx, 31, 0x261B74u);
    ctx->pc = 0x261B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B6Cu;
    // 0x261b70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x261B6Cu, 0x261B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B74u;
label_261b74:
    // 0x261b74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x261b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b78: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x261B78u;
    SET_GPR_U32(ctx, 31, 0x261B80u);
    ctx->pc = 0x261B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B78u;
    // 0x261b7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x261B78u, 0x261B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B80u;
label_261b80:
    // 0x261b80: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x261b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x261b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b8c: 0xc0970a6  jal         func_25C298
    ctx->pc = 0x261B8Cu;
    SET_GPR_U32(ctx, 31, 0x261B94u);
    ctx->pc = 0x261B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B8Cu;
    // 0x261b90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C298u, 0x261B8Cu, 0x261B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B94u;
label_261b94:
    // 0x261b94: 0x27c40090  addiu       $a0, $fp, 0x90
    ctx->pc = 0x261b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x261b98: 0xc097084  jal         func_25C210
    ctx->pc = 0x261B98u;
    SET_GPR_U32(ctx, 31, 0x261BA0u);
    ctx->pc = 0x261B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B98u;
    // 0x261b9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x261B98u, 0x261BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BA0u;
label_261ba0:
    // 0x261ba0: 0x26c4006c  addiu       $a0, $s6, 0x6C
    ctx->pc = 0x261ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 108));
    // 0x261ba4: 0xc098ae0  jal         func_262B80
    ctx->pc = 0x261BA4u;
    SET_GPR_U32(ctx, 31, 0x261BACu);
    ctx->pc = 0x261BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BA4u;
    // 0x261ba8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B80u, 0x261BA4u, 0x261BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BACu;
label_261bac:
    // 0x261bac: 0x26e4006c  addiu       $a0, $s7, 0x6C
    ctx->pc = 0x261bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 108));
    // 0x261bb0: 0xc098ae0  jal         func_262B80
    ctx->pc = 0x261BB0u;
    SET_GPR_U32(ctx, 31, 0x261BB8u);
    ctx->pc = 0x261BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BB0u;
    // 0x261bb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B80u, 0x261BB0u, 0x261BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BB8u;
label_261bb8:
    // 0x261bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261bbc: 0xc097084  jal         func_25C210
    ctx->pc = 0x261BBCu;
    SET_GPR_U32(ctx, 31, 0x261BC4u);
    ctx->pc = 0x261BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BBCu;
    // 0x261bc0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x261BBCu, 0x261BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BC4u;
label_261bc4:
    // 0x261bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261bc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x261bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261bcc: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x261BCCu;
    SET_GPR_U32(ctx, 31, 0x261BD4u);
    ctx->pc = 0x261BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BCCu;
    // 0x261bd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x261BCCu, 0x261BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BD4u;
label_261bd4:
    // 0x261bd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x261bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261bd8: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x261BD8u;
    SET_GPR_U32(ctx, 31, 0x261BE0u);
    ctx->pc = 0x261BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BD8u;
    // 0x261bdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x261BD8u, 0x261BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BE0u;
label_261be0:
    // 0x261be0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x261be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261be4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x261be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261be8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261bec: 0xc0970a6  jal         func_25C298
    ctx->pc = 0x261BECu;
    SET_GPR_U32(ctx, 31, 0x261BF4u);
    ctx->pc = 0x261BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BECu;
    // 0x261bf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C298u, 0x261BECu, 0x261BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BF4u;
label_261bf4:
    // 0x261bf4: 0x27c40750  addiu       $a0, $fp, 0x750
    ctx->pc = 0x261bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1872));
    // 0x261bf8: 0xc097084  jal         func_25C210
    ctx->pc = 0x261BF8u;
    SET_GPR_U32(ctx, 31, 0x261C00u);
    ctx->pc = 0x261BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BF8u;
    // 0x261bfc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x261BF8u, 0x261C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C00u;
label_261c00:
    // 0x261c00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x261C00u;
    {
        const bool branch_taken_0x261c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c00) {
            ctx->pc = 0x261C54u;
            goto label_261c54;
        }
    }
    ctx->pc = 0x261C08u;
label_261c08:
    // 0x261c08: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x261C08u;
    SET_GPR_U32(ctx, 31, 0x261C10u);
    ctx->pc = 0x261C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C08u;
    // 0x261c0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x261C08u, 0x261C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C10u;
label_261c10:
    // 0x261c10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x261c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c14: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x261C14u;
    SET_GPR_U32(ctx, 31, 0x261C1Cu);
    ctx->pc = 0x261C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C14u;
    // 0x261c18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x261C14u, 0x261C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C1Cu;
label_261c1c:
    // 0x261c1c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x261c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x261c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c28: 0xc0970a6  jal         func_25C298
    ctx->pc = 0x261C28u;
    SET_GPR_U32(ctx, 31, 0x261C30u);
    ctx->pc = 0x261C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C28u;
    // 0x261c2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C298u, 0x261C28u, 0x261C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C30u;
label_261c30:
    // 0x261c30: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x261c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x261c34: 0xc0849c0  jal         func_212700
    ctx->pc = 0x261C34u;
    SET_GPR_U32(ctx, 31, 0x261C3Cu);
    ctx->pc = 0x261C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C34u;
    // 0x261c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x261C34u, 0x261C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C3Cu;
label_261c3c:
    // 0x261c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c40: 0xc097084  jal         func_25C210
    ctx->pc = 0x261C40u;
    SET_GPR_U32(ctx, 31, 0x261C48u);
    ctx->pc = 0x261C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C40u;
    // 0x261c44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x261C40u, 0x261C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C48u;
label_261c48:
    // 0x261c48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x261c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c4c: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x261C4Cu;
    SET_GPR_U32(ctx, 31, 0x261C54u);
    ctx->pc = 0x261C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C4Cu;
    // 0x261c50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x261C4Cu, 0x261C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C54u;
label_261c54:
    // 0x261c54: 0xc0849c0  jal         func_212700
    ctx->pc = 0x261C54u;
    SET_GPR_U32(ctx, 31, 0x261C5Cu);
    ctx->pc = 0x261C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C54u;
    // 0x261c58: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x261C54u, 0x261C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C5Cu;
label_261c5c:
    // 0x261c5c: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x261c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x261c60: 0xc7a50090  lwc1        $f5, 0x90($sp)
    ctx->pc = 0x261c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x261c64: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x261c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x261c68: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x261c68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x261c6c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x261c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x261c70: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x261c70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x261c74: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x261c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261c78: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x261c78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x261c7c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x261c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261c80: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x261c80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x261c84: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x261c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x261c88: 0xc7b50248  lwc1        $f21, 0x248($sp)
    ctx->pc = 0x261c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x261c8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x261c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x261c90: 0xc7b40240  lwc1        $f20, 0x240($sp)
    ctx->pc = 0x261c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x261c94: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x261c94u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x261c98: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x261c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x261c9c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x261c9cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x261ca0: 0xdfb001f0  ld          $s0, 0x1F0($sp)
    ctx->pc = 0x261ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x261ca4: 0xdfb101f8  ld          $s1, 0x1F8($sp)
    ctx->pc = 0x261ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x261ca8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x261ca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x261cac: 0xdfb20200  ld          $s2, 0x200($sp)
    ctx->pc = 0x261cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x261cb0: 0xdfb30208  ld          $s3, 0x208($sp)
    ctx->pc = 0x261cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x261cb4: 0xdfb40210  ld          $s4, 0x210($sp)
    ctx->pc = 0x261cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x261cb8: 0xdfb50218  ld          $s5, 0x218($sp)
    ctx->pc = 0x261cb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x261cbc: 0xdfb60220  ld          $s6, 0x220($sp)
    ctx->pc = 0x261cbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x261cc0: 0xdfb70228  ld          $s7, 0x228($sp)
    ctx->pc = 0x261cc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x261cc4: 0xdfbe0230  ld          $fp, 0x230($sp)
    ctx->pc = 0x261cc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x261cc8: 0xdfbf0238  ld          $ra, 0x238($sp)
    ctx->pc = 0x261cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x261ccc: 0xe4440030  swc1        $f4, 0x30($v0)
    ctx->pc = 0x261cccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x261cd0: 0xe4430034  swc1        $f3, 0x34($v0)
    ctx->pc = 0x261cd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x261cd4: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x261cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x261cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x261CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CD8u;
        // 0x261cdc: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261CE0u;
}
