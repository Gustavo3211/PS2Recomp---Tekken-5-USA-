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

// Function: sub_004900D0
// Address: 0x4900d0 - 0x4901a0
void sub_004900D0_0x4900d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004900D0_0x4900d0");
#endif

    switch (ctx->pc) {
        case 0x4900f4u: goto label_4900f4;
        case 0x490140u: goto label_490140;
        case 0x490150u: goto label_490150;
        case 0x490160u: goto label_490160;
        case 0x490168u: goto label_490168;
        default: break;
    }

    ctx->pc = 0x4900d0u;

    // 0x4900d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4900d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4900d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4900d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4900d8: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x4900d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x4900dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4900dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4900e0: 0x2650d680  addiu       $s0, $s2, -0x2980
    ctx->pc = 0x4900e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4900e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4900e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4900e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4900e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4900ec: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4900ECu;
    SET_GPR_U32(ctx, 31, 0x4900F4u);
    ctx->pc = 0x4900F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4900ECu;
    // 0x4900f0: 0xa6002264  sh          $zero, 0x2264($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8804), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4900ECu, 0x4900F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4900F4u;
label_4900f4:
    // 0x4900f4: 0x86032268  lh          $v1, 0x2268($s0)
    ctx->pc = 0x4900f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8808)));
    // 0x4900f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4900f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4900fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4900fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x490100: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x490100u;
    {
        const bool branch_taken_0x490100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x490104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490100u;
        // 0x490104: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x490100) {
            ctx->pc = 0x490138u;
            goto label_490138;
        }
    }
    ctx->pc = 0x490108u;
    // 0x490108: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x490108u;
    {
        const bool branch_taken_0x490108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490108) {
            ctx->pc = 0x49010Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490108u;
            // 0x49010c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x490120u;
            goto label_490120;
        }
    }
    ctx->pc = 0x490110u;
    // 0x490110: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x490110u;
    {
        const bool branch_taken_0x490110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x490110) {
            ctx->pc = 0x490138u;
            goto label_490138;
        }
    }
    ctx->pc = 0x490118u;
    // 0x490118: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x490118u;
    {
        const bool branch_taken_0x490118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490118) {
            ctx->pc = 0x490160u;
            goto label_490160;
        }
    }
    ctx->pc = 0x490120u;
label_490120:
    // 0x490120: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x490120u;
    {
        const bool branch_taken_0x490120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x490124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490120u;
        // 0x490124: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490120) {
            ctx->pc = 0x490148u;
            goto label_490148;
        }
    }
    ctx->pc = 0x490128u;
    // 0x490128: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x490128u;
    {
        const bool branch_taken_0x490128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x490128) {
            ctx->pc = 0x490158u;
            goto label_490158;
        }
    }
    ctx->pc = 0x490130u;
    // 0x490130: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x490130u;
    {
        const bool branch_taken_0x490130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490130) {
            ctx->pc = 0x490160u;
            goto label_490160;
        }
    }
    ctx->pc = 0x490138u;
label_490138:
    // 0x490138: 0xc1284f0  jal         func_4A13C0
    ctx->pc = 0x490138u;
    SET_GPR_U32(ctx, 31, 0x490140u);
    ctx->pc = 0x49013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490138u;
    // 0x49013c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A13C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A13C0u, 0x490138u, 0x490140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490140u;
label_490140:
    // 0x490140: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x490140u;
    {
        const bool branch_taken_0x490140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490140) {
            ctx->pc = 0x490160u;
            goto label_490160;
        }
    }
    ctx->pc = 0x490148u;
label_490148:
    // 0x490148: 0xc128840  jal         func_4A2100
    ctx->pc = 0x490148u;
    SET_GPR_U32(ctx, 31, 0x490150u);
    ctx->pc = 0x49014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490148u;
    // 0x49014c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2100u, 0x490148u, 0x490150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490150u;
label_490150:
    // 0x490150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x490150u;
    {
        const bool branch_taken_0x490150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490150) {
            ctx->pc = 0x490160u;
            goto label_490160;
        }
    }
    ctx->pc = 0x490158u;
label_490158:
    // 0x490158: 0xc123998  jal         func_48E660
    ctx->pc = 0x490158u;
    SET_GPR_U32(ctx, 31, 0x490160u);
    ctx->pc = 0x49015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490158u;
    // 0x49015c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E660u, 0x490158u, 0x490160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490160u;
label_490160:
    // 0x490160: 0xc124068  jal         func_4901A0
    ctx->pc = 0x490160u;
    SET_GPR_U32(ctx, 31, 0x490168u);
    ctx->pc = 0x490164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490160u;
    // 0x490164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4901A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4901A0u, 0x490160u, 0x490168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490168u;
label_490168:
    // 0x490168: 0x2642d680  addiu       $v0, $s2, -0x2980
    ctx->pc = 0x490168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x49016c: 0x2450007c  addiu       $s0, $v0, 0x7C
    ctx->pc = 0x49016cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x490170: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x490170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490174: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x490174u;
    {
        const bool branch_taken_0x490174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x490178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490174u;
        // 0x490178: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490174) {
            ctx->pc = 0x490184u;
            goto label_490184;
        }
    }
    ctx->pc = 0x49017Cu;
    // 0x49017c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49017cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x490180: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x490180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_490184:
    // 0x490184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x490184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x490188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49018c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49018cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490190: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x490190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x490194: 0x3e00008  jr          $ra
    ctx->pc = 0x490194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x490198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490194u;
        // 0x490198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49019Cu;
    // 0x49019c: 0x0  nop
    ctx->pc = 0x49019cu;
    // NOP
    ctx->pc = 0x4901a0u;
}
