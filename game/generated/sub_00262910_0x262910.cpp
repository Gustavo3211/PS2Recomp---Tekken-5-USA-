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

// Function: sub_00262910
// Address: 0x262910 - 0x262a68
void sub_00262910_0x262910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262910_0x262910");
#endif

    switch (ctx->pc) {
        case 0x262958u: goto label_262958;
        case 0x2629b4u: goto label_2629b4;
        case 0x2629d4u: goto label_2629d4;
        case 0x262a00u: goto label_262a00;
        case 0x262a18u: goto label_262a18;
        case 0x262a28u: goto label_262a28;
        default: break;
    }

    ctx->pc = 0x262910u;

    // 0x262910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x262910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x262914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x262918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26291c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26291cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262920: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x262920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x262924: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x262924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x262928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26292c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26292cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262930: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x262930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x262934: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x262934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x262938: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x262938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x26293c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x26293cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x262940: 0x8e2403d0  lw          $a0, 0x3D0($s1)
    ctx->pc = 0x262940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
    // 0x262944: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x262944u;
    {
        const bool branch_taken_0x262944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x262948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262944u;
        // 0x262948: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262944) {
            ctx->pc = 0x262A3Cu;
            goto label_262a3c;
        }
    }
    ctx->pc = 0x26294Cu;
    // 0x26294c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x26294cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262950: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x262950u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262954: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x262954u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_262958:
    // 0x262958: 0x92030040  lbu         $v1, 0x40($s0)
    ctx->pc = 0x262958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x26295c: 0x92050042  lbu         $a1, 0x42($s0)
    ctx->pc = 0x26295cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x262960: 0x10760017  beq         $v1, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x262960u;
    {
        const bool branch_taken_0x262960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x262964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262960u;
        // 0x262964: 0x8e060044  lw          $a2, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262960) {
            ctx->pc = 0x2629C0u;
            goto label_2629c0;
        }
    }
    ctx->pc = 0x262968u;
    // 0x262968: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x262968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26296c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26296Cu;
    {
        const bool branch_taken_0x26296c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26296c) {
            ctx->pc = 0x262988u;
            goto label_262988;
        }
    }
    ctx->pc = 0x262974u;
    // 0x262974: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x262974u;
    {
        const bool branch_taken_0x262974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262974) {
            ctx->pc = 0x2629A0u;
            goto label_2629a0;
        }
    }
    ctx->pc = 0x26297Cu;
    // 0x26297c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x26297Cu;
    {
        const bool branch_taken_0x26297c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26297Cu;
        // 0x262980: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26297c) {
            ctx->pc = 0x262A30u;
            goto label_262a30;
        }
    }
    ctx->pc = 0x262984u;
    // 0x262984: 0x0  nop
    ctx->pc = 0x262984u;
    // NOP
label_262988:
    // 0x262988: 0x10750015  beq         $v1, $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x262988u;
    {
        const bool branch_taken_0x262988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x262988) {
            ctx->pc = 0x2629E0u;
            goto label_2629e0;
        }
    }
    ctx->pc = 0x262990u;
    // 0x262990: 0x50740023  beql        $v1, $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x262990u;
    {
        const bool branch_taken_0x262990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x262990) {
            ctx->pc = 0x262994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262990u;
            // 0x262994: 0x82040041  lb          $a0, 0x41($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A20u;
            goto label_262a20;
        }
    }
    ctx->pc = 0x262998u;
    // 0x262998: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x262998u;
    {
        const bool branch_taken_0x262998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262998u;
        // 0x26299c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262998) {
            ctx->pc = 0x262A30u;
            goto label_262a30;
        }
    }
    ctx->pc = 0x2629A0u;
label_2629a0:
    // 0x2629a0: 0x52400023  beql        $s2, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2629A0u;
    {
        const bool branch_taken_0x2629a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2629a0) {
            ctx->pc = 0x2629A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2629A0u;
            // 0x2629a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A30u;
            goto label_262a30;
        }
    }
    ctx->pc = 0x2629A8u;
    // 0x2629a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2629a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629ac: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x2629ACu;
    SET_GPR_U32(ctx, 31, 0x2629B4u);
    ctx->pc = 0x2629B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629ACu;
    // 0x2629b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x2629ACu, 0x2629B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629B4u;
label_2629b4:
    // 0x2629b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2629B4u;
    {
        const bool branch_taken_0x2629b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629B4u;
        // 0x2629b8: 0x8e2403d0  lw          $a0, 0x3D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629b4) {
            ctx->pc = 0x262A2Cu;
            goto label_262a2c;
        }
    }
    ctx->pc = 0x2629BCu;
    // 0x2629bc: 0x0  nop
    ctx->pc = 0x2629bcu;
    // NOP
label_2629c0:
    // 0x2629c0: 0x5240001b  beql        $s2, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2629C0u;
    {
        const bool branch_taken_0x2629c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2629c0) {
            ctx->pc = 0x2629C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2629C0u;
            // 0x2629c4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A30u;
            goto label_262a30;
        }
    }
    ctx->pc = 0x2629C8u;
    // 0x2629c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2629c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629cc: 0xc094dcc  jal         func_253730
    ctx->pc = 0x2629CCu;
    SET_GPR_U32(ctx, 31, 0x2629D4u);
    ctx->pc = 0x2629D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629CCu;
    // 0x2629d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x2629CCu, 0x2629D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629D4u;
label_2629d4:
    // 0x2629d4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2629D4u;
    {
        const bool branch_taken_0x2629d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629D4u;
        // 0x2629d8: 0x8e2403d0  lw          $a0, 0x3D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629d4) {
            ctx->pc = 0x262A2Cu;
            goto label_262a2c;
        }
    }
    ctx->pc = 0x2629DCu;
    // 0x2629dc: 0x0  nop
    ctx->pc = 0x2629dcu;
    // NOP
label_2629e0:
    // 0x2629e0: 0x52400013  beql        $s2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2629E0u;
    {
        const bool branch_taken_0x2629e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2629e0) {
            ctx->pc = 0x2629E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2629E0u;
            // 0x2629e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A30u;
            goto label_262a30;
        }
    }
    ctx->pc = 0x2629E8u;
    // 0x2629e8: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2629E8u;
    {
        const bool branch_taken_0x2629e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2629e8) {
            ctx->pc = 0x2629ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2629E8u;
            // 0x2629ec: 0x82080041  lb          $t0, 0x41($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A08u;
            goto label_262a08;
        }
    }
    ctx->pc = 0x2629F0u;
    // 0x2629f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2629f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2629f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629f8: 0xc095306  jal         func_254C18
    ctx->pc = 0x2629F8u;
    SET_GPR_U32(ctx, 31, 0x262A00u);
    ctx->pc = 0x2629FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629F8u;
    // 0x2629fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x2629F8u, 0x262A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A00u;
label_262a00:
    // 0x262a00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x262A00u;
    {
        const bool branch_taken_0x262a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A00u;
        // 0x262a04: 0x8e2403d0  lw          $a0, 0x3D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a00) {
            ctx->pc = 0x262A2Cu;
            goto label_262a2c;
        }
    }
    ctx->pc = 0x262A08u;
label_262a08:
    // 0x262a08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x262a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a0c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x262a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262a10: 0xc095312  jal         func_254C48
    ctx->pc = 0x262A10u;
    SET_GPR_U32(ctx, 31, 0x262A18u);
    ctx->pc = 0x262A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A10u;
    // 0x262a14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C48u, 0x262A10u, 0x262A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A18u;
label_262a18:
    // 0x262a18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262A18u;
    {
        const bool branch_taken_0x262a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A18u;
        // 0x262a1c: 0x8e2403d0  lw          $a0, 0x3D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a18) {
            ctx->pc = 0x262A2Cu;
            goto label_262a2c;
        }
    }
    ctx->pc = 0x262A20u;
label_262a20:
    // 0x262a20: 0xc098996  jal         func_262658
    ctx->pc = 0x262A20u;
    SET_GPR_U32(ctx, 31, 0x262A28u);
    ctx->pc = 0x262A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A20u;
    // 0x262a24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262658u, 0x262A20u, 0x262A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A28u;
label_262a28:
    // 0x262a28: 0x8e2403d0  lw          $a0, 0x3D0($s1)
    ctx->pc = 0x262a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
label_262a2c:
    // 0x262a2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x262a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_262a30:
    // 0x262a30: 0x264102b  sltu        $v0, $s3, $a0
    ctx->pc = 0x262a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x262a34: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x262A34u;
    {
        const bool branch_taken_0x262a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A34u;
        // 0x262a38: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a34) {
            ctx->pc = 0x262958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262958;
        }
    }
    ctx->pc = 0x262A3Cu;
label_262a3c:
    // 0x262a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x262a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x262a44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x262a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262a48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x262a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x262a4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x262a4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262a50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x262a50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x262a54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x262a54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262a58: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x262a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x262a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x262A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A5Cu;
        // 0x262a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262A64u;
    // 0x262a64: 0x0  nop
    ctx->pc = 0x262a64u;
    // NOP
    ctx->pc = 0x262a68u;
}
