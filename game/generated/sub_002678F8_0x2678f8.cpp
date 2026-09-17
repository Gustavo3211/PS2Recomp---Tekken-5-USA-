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

// Function: sub_002678F8
// Address: 0x2678f8 - 0x267a10
void sub_002678F8_0x2678f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002678F8_0x2678f8");
#endif

    switch (ctx->pc) {
        case 0x267930u: goto label_267930;
        case 0x267950u: goto label_267950;
        case 0x267980u: goto label_267980;
        default: break;
    }

    ctx->pc = 0x2678f8u;

    // 0x2678f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2678f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2678fc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2678fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267900: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x267900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x267904: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x267904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x267908: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x267908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x26790c: 0x462003d  bltzl       $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x26790Cu;
    {
        const bool branch_taken_0x26790c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x26790c) {
            ctx->pc = 0x267910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26790Cu;
            // 0x267910: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267A04u;
            goto label_267a04;
        }
    }
    ctx->pc = 0x267914u;
    // 0x267914: 0x84420346  lh          $v0, 0x346($v0)
    ctx->pc = 0x267914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x267918: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x267918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26791c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26791cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x267920: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x267920u;
    {
        const bool branch_taken_0x267920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267920) {
            ctx->pc = 0x267924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267920u;
            // 0x267924: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267A04u;
            goto label_267a04;
        }
    }
    ctx->pc = 0x267928u;
    // 0x267928: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267928u;
    SET_GPR_U32(ctx, 31, 0x267930u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267928u, 0x267930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267930u;
label_267930:
    // 0x267930: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267934: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x267934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x267938: 0x8465034c  lh          $a1, 0x34C($v1)
    ctx->pc = 0x267938u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 844)));
    // 0x26793c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x26793cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x267940: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x267940u;
    {
        const bool branch_taken_0x267940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267940u;
        // 0x267944: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267940) {
            ctx->pc = 0x267A00u;
            goto label_267a00;
        }
    }
    ctx->pc = 0x267948u;
    // 0x267948: 0xc099c58  jal         func_267160
    ctx->pc = 0x267948u;
    SET_GPR_U32(ctx, 31, 0x267950u);
    ctx->pc = 0x267160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267160u, 0x267948u, 0x267950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267950u;
label_267950:
    // 0x267950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267954: 0x1a000024  blez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x267954u;
    {
        const bool branch_taken_0x267954 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x267958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267954u;
        // 0x267958: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267954) {
            ctx->pc = 0x2679E8u;
            goto label_2679e8;
        }
    }
    ctx->pc = 0x26795Cu;
    // 0x26795c: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267960: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x267960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267964: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x267964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x267968: 0xac820100  sw          $v0, 0x100($a0)
    ctx->pc = 0x267968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
    // 0x26796c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267970: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x267970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x267974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x267978: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267978u;
    SET_GPR_U32(ctx, 31, 0x267980u);
    ctx->pc = 0x26797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267978u;
    // 0x26797c: 0xac6200f4  sw          $v0, 0xF4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267978u, 0x267980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267980u;
label_267980:
    // 0x267980: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x267980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x267984: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x267984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x267988: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x267988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26798c: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x26798cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x267990: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x267994: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x267994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x267998: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x267998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x26799c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26799cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2679a0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2679a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2679a4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2679a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2679a8: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x2679a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x2679ac: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x2679acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x2679b0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2679b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2679b4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2679b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2679b8: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x2679b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x2679bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2679bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2679c0: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2679c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2679c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2679c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2679c8: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x2679c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2679cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2679ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2679d0: 0xacc2011c  sw          $v0, 0x11C($a2)
    ctx->pc = 0x2679d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 284), GPR_U32(ctx, 2));
    // 0x2679d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2679d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2679d8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2679d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2679dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2679DCu;
    {
        const bool branch_taken_0x2679dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679DCu;
        // 0x2679e0: 0xac430120  sw          $v1, 0x120($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679dc) {
            ctx->pc = 0x267A00u;
            goto label_267a00;
        }
    }
    ctx->pc = 0x2679E4u;
    // 0x2679e4: 0x0  nop
    ctx->pc = 0x2679e4u;
    // NOP
label_2679e8:
    // 0x2679e8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2679e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2679ec: 0xac4400f4  sw          $a0, 0xF4($v0)
    ctx->pc = 0x2679ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 4));
    // 0x2679f0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2679f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2679f4: 0xac64011c  sw          $a0, 0x11C($v1)
    ctx->pc = 0x2679f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 4));
    // 0x2679f8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2679f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2679fc: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x2679fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
label_267a00:
    // 0x267a00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x267a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_267a04:
    // 0x267a04: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x267a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x267a08: 0x3e00008  jr          $ra
    ctx->pc = 0x267A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A08u;
        // 0x267a0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267A10u;
}
