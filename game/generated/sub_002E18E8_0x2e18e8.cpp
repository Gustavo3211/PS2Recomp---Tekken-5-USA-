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

// Function: sub_002E18E8
// Address: 0x2e18e8 - 0x2e19a0
void sub_002E18E8_0x2e18e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E18E8_0x2e18e8");
#endif

    switch (ctx->pc) {
        case 0x2e1944u: goto label_2e1944;
        case 0x2e1950u: goto label_2e1950;
        case 0x2e1960u: goto label_2e1960;
        case 0x2e1968u: goto label_2e1968;
        case 0x2e1970u: goto label_2e1970;
        case 0x2e1978u: goto label_2e1978;
        case 0x2e1988u: goto label_2e1988;
        default: break;
    }

    ctx->pc = 0x2e18e8u;

    // 0x2e18e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e18e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e18ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e18ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e18f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e18f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e18f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e18f8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2e18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e18fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E18FCu;
    {
        const bool branch_taken_0x2e18fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18FCu;
        // 0x2e1900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18fc) {
            ctx->pc = 0x2E1918u;
            goto label_2e1918;
        }
    }
    ctx->pc = 0x2E1904u;
    // 0x2e1904: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E1904u;
    {
        const bool branch_taken_0x2e1904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1904u;
        // 0x2e1908: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1904) {
            ctx->pc = 0x2E1980u;
            goto label_2e1980;
        }
    }
    ctx->pc = 0x2E190Cu;
    // 0x2e190c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E190Cu;
    {
        const bool branch_taken_0x2e190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E190Cu;
        // 0x2e1910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e190c) {
            ctx->pc = 0x2E1990u;
            goto label_2e1990;
        }
    }
    ctx->pc = 0x2E1914u;
    // 0x2e1914: 0x0  nop
    ctx->pc = 0x2e1914u;
    // NOP
label_2e1918:
    // 0x2e1918: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2e1918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2e191c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E191Cu;
    {
        const bool branch_taken_0x2e191c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e191c) {
            ctx->pc = 0x2E1920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E191Cu;
            // 0x2e1920: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E198Cu;
            goto label_2e198c;
        }
    }
    ctx->pc = 0x2E1924u;
    // 0x2e1924: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2e1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2e1928: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E1928u;
    {
        const bool branch_taken_0x2e1928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1928) {
            ctx->pc = 0x2E192Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1928u;
            // 0x2e192c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E198Cu;
            goto label_2e198c;
        }
    }
    ctx->pc = 0x2E1930u;
    // 0x2e1930: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2e1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2e1934: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E1934u;
    {
        const bool branch_taken_0x2e1934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1934) {
            ctx->pc = 0x2E1938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1934u;
            // 0x2e1938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E198Cu;
            goto label_2e198c;
        }
    }
    ctx->pc = 0x2E193Cu;
    // 0x2e193c: 0xc0b8594  jal         func_2E1650
    ctx->pc = 0x2E193Cu;
    SET_GPR_U32(ctx, 31, 0x2E1944u);
    ctx->pc = 0x2E1650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1650u, 0x2E193Cu, 0x2E1944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1944u;
label_2e1944:
    // 0x2e1944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1948: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E1948u;
    SET_GPR_U32(ctx, 31, 0x2E1950u);
    ctx->pc = 0x2E194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1948u;
    // 0x2e194c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E1948u, 0x2E1950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1950u;
label_2e1950:
    // 0x2e1950: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2e1950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e1954: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2e1954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2e1958: 0xc0b871c  jal         func_2E1C70
    ctx->pc = 0x2E1958u;
    SET_GPR_U32(ctx, 31, 0x2E1960u);
    ctx->pc = 0x2E195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1958u;
    // 0x2e195c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1C70u, 0x2E1958u, 0x2E1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1960u;
label_2e1960:
    // 0x2e1960: 0xc08b1e8  jal         func_22C7A0
    ctx->pc = 0x2E1960u;
    SET_GPR_U32(ctx, 31, 0x2E1968u);
    ctx->pc = 0x2E1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1960u;
    // 0x2e1964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7A0u, 0x2E1960u, 0x2E1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1968u;
label_2e1968:
    // 0x2e1968: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x2E1968u;
    SET_GPR_U32(ctx, 31, 0x2E1970u);
    ctx->pc = 0x2E196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1968u;
    // 0x2e196c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x2E1968u, 0x2E1970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1970u;
label_2e1970:
    // 0x2e1970: 0xc08eea2  jal         func_23BA88
    ctx->pc = 0x2E1970u;
    SET_GPR_U32(ctx, 31, 0x2E1978u);
    ctx->pc = 0x23BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BA88u, 0x2E1970u, 0x2E1978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1978u;
label_2e1978:
    // 0x2e1978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e197c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2e197cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2e1980:
    // 0x2e1980: 0xc08ea2c  jal         func_23A8B0
    ctx->pc = 0x2E1980u;
    SET_GPR_U32(ctx, 31, 0x2E1988u);
    ctx->pc = 0x23A8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8B0u, 0x2E1980u, 0x2E1988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1988u;
label_2e1988:
    // 0x2e1988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e198c:
    // 0x2e198c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e198cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1990:
    // 0x2e1990: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1994: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1994u;
        // 0x2e1998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E199Cu;
    // 0x2e199c: 0x0  nop
    ctx->pc = 0x2e199cu;
    // NOP
    ctx->pc = 0x2e19a0u;
}
